#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

struct element {
	string name,status,component1,component2; 
};

class Alchemy {
	element thing[384];
	string perLine, havePlayedBefore, userName;
	ifstream readUserc; ofstream writeto_userc; 
	string garbage; /*garbage string*/
	/* Create two files. One to read all the elements from, and one to store the Created elements In.*/
	ifstream read_datac, read_userc;
	read_datac.open("data.c"); // This File contains all the Data.
	ofstream appendUserc;
	appendUserc.open("user.c", ios::app); // This File Saves User Profiles.
 

	void play(){
		int i = 0;
		string a, b, c; // Begin Infy loop. that is, Menu

		int l = -1, tabo = 0;
		while (i == 0) {
			if (l != -1) {
				// Writing the Created Element's Information in the User Profile.

				appendUserc<<userName<<endl<<thing[l].name <<" = "<<thing[l].component1<<" + "<<thing[l].component2<<endl<< userName << endl;
			}
			l = -1;
			cout << "\n\n------------------------------------------------------------------------------------------------------------\n\nEnter your choice\n1. Combine and Create\n2.Look up all created elements\n3.Look up info of one element\n4.Look up all possible elements\n5. Exit\n :";
			int ab; cin >> ab;

			switch (ab) {
				case 1: {
					cout << "\nEnter the Elements you want to combine : ";
					cin >> a >> b;
					l = create(a,b,thing);
					break;
				}
				case 2: {
					cout << "\n\n-----------------------------------You have the following Elements--------------------------------------\n\n--Fire, Earth, Air and Water are elemental. \n";
					read_userc.open("user.c");
					read_userc >> garbage;
					while (!read_userc.eof()) {
						read_userc >> garbage;
						if (garbage == userName) {
							read_userc >> garbage;
							while (garbage != userName) {
								cout << "--";
								for (int ii = 0; ii < 5; ii++) {
									cout << garbage << " ";
									read_userc >> garbage;
								}
								cout << endl;
							}
						}
					}
					read_userc.close();
					break;
				}
				case 3: {
					cout<<"\nEnter the element whose info you want : "; 
					cin>>c; lookinfo(c, thing);
					break;
				}
				case 4: {
					lookall(thing);
					break;
				}
				case 5: {
					appendUserc<<"\n "<<userName<<" "<<userName<<" ";
					return 0;
				}
			}
		}
	}

	int create(string a, string b) {
		for (int i=0; i<364; i++){
			if(thing[i].status != "created" && (thing[i].name == a || thing[i].name == b)){
				cout << "\nERROR!!\n. Element used not created.\n"; 
				return(-1);
			}
		}
		for (int i=0; i<364; i++){
			if(thing[i].status != "created" && ((thing[i].component1 == a && thing[i].component2 == b) || (thing[i].component1 == b && thing[i].component2 == a))){
				cout << "\nCONGRATULATIONS!!!! \nNEW ELEMENT CREATED! - "<<thing[i].name;
				thing[i].status = "created";
				return(i);
			}
		}
		cout << "\nSORRY!\n No new Created.\n";
		return(-1);
	}

	void look() {
		int x = 1;
		for (int i = 0; i < 364; i++) {
			if (thing[i].status == "created") {
				cout<<"\n"<<x<<". "<< thing[i].name; //" = "<<thing[i].component1<<" + "<<thing[i].component2<<".\n";
				x++;
			}
		}
	}
	
	void lookinfo(string a) {
	int x = 1;
	for (int i = 0; i < 364; i++) {
		if ((thing[i].name == a || thing[i].component1 == a || thing[i].component2 == a) && thing[i].status == "created") {
			cout << "\n" << x << ". " << thing[i].name << " = " << thing[i].component1 << " + " << thing[i].component2 << ".\n";
			x++;
		}
	}
	void lookall() {
		for (int i = 0; i < 364; i++) 
			cout << thing[i].name << "\n";
	}
 public:
	Alchemy() {
		cout << "\n\n*******************************************************************************************************************\n This game lets you create the world around you using the four elements of archemedes - Air, Fire, Water and Earth.\n You can combine two of the known elements and create a new element. This goes on till all elements have been created.\n\n\n**Please do not use Capital Letters. \n\n\n**Enter all data in small case.Like password, this program is case sensitive";
		// Asking the User whether they have played the Game Before. Much like Load/Save Profile.
		cout << "\n_________________________________________________________________________________________________________________________________-\nAre you a new user?Enter 'yes' if you are. If you are not a new user then enter no. \n";
		cin >> havePlayedBefore;
		bool userExists = 0;
		if (havePlayedBefore == "yes") {
			do {
				userExists = 0;
				cout << "Please enter your name : ";
				cin >> userName;
				readUserc.open("user.c");
				readUserc >> perLine;
				while (!readUserc.eof()) {
					if (perLine == userName) {
						cout << "\nSorry, user already exists.\n";
						userExists = 1;
						break;
					}
					readUserc >> perLine;
				}
				readUserc.close();
			} while (userExists);
			writeto_userc.open("user.c", ios::app);

			writeto_userc<<"newUser "<<userName<<endl<<userName<<" \n ";
			writeto_userc.close();
			cout << "outofIfLoop";
		}
		// Confirming User Existence.
		else {
			bool userExistsAlready = 0;
			while (!userExistsAlready) {
				cout << "\nPlease enter your name : "; cin >> userName;
				readUserc.open("user.c");
				while (!readUserc.eof() && !userExistsAlready) {
					readUserc >> perLine;
					if (perLine == userName) {
						cout << "\nPleasure to meet you again, " << userName << endl;
						userExistsAlready = 1;
					}
				}
				if (!userExistsAlready)
					cout << "\nSorry! User Name does not exist\n";
				readUserc.close();
			}
		}
		for (int i = 0; i < 364; i++) {
			// Reading The Name, component1 and component2 of the thing.
			// cout<<read_datac;
			read_datac >> thing[i].name;// read_datac>>garbage;
			read_datac >> thing[i].component1; // read_datac>>garbage;
			read_datac >> thing[i].component2; // As Fire, Earth, Air and Water are elemental, their Status is being set to "Created".
			if (thing[i].name == "fire" || thing[i].name == "water" || thing[i].name == "air" || thing[i].name == "earth") {
				thing[i].status = "created";
				thing[i].component1 = "elemental";
				thing[i].component2 = "elemental";
			}

			// If in case the user has already unlocked certain elements, their status is being set to Created.
			read_userc.open("user.c");
			read_userc >> garbage;
			while (!read_userc.eof()) {
				while (garbage != userName && !read_userc.eof()) {
					read_userc >> garbage;
				}
				read_userc >> garbage;
				while (garbage != userName && !read_userc.eof()) {
					if (thing[i].name == garbage) {
						thing[i].status = "created";
					}
					read_userc >> garbage;
				}
			}
			read_userc.close();
		}
		read_datac.close(); // Provide the user with the Choices in the form of a menu.
	}
};

int main() {
	Alchemy al;
	al.play();
}
