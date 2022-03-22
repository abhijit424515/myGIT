#include<simplecpp>
bool lab_marks(int &total_marks){
    int l1,l2,l3,l4,l5,l6,l7,p; bool x=true; int temp;
    cin>>l1>>l2>>l3>>l4>>l5>>l6>>l7>>p;

    while(x==true){
        if(l1<l2){
            temp=l1; l1=l2; l2=temp; break;
        }
        else if(l2<l3){
            temp=l2; l2=l3; l3=temp; break;
        }
        else if(l3<l4){
            temp=l3; l3=l4; l4=temp; break;
        }
        else if(l4<l5){
            temp=l4; l4=l5; l5=temp; break;
        }
        else if(l5<l6){
            temp=l5; l5=l6; l6=temp; break;
        }
        else if(l6<l7){
            temp=l6; l6=l7; l7=temp; break;
        }
        else{x=false;}
    }
    total_marks += (l1+l2+l3+l4+l5);

    return p;
}
bool quiz_marks(int &total_marks){
    int l1,l2,l3,l4,l5,l6,p; bool x=true; int temp;
    cin>>l1>>l2>>l3>>l4>>l5>>l6>>p;

    while(x==true){
        if(l1<l2){
            temp=l1; l1=l2; l2=temp; break;
        }
        else if(l2<l3){
            temp=l2; l2=l3; l3=temp; break;
        }
        else if(l3<l4){
            temp=l3; l3=l4; l4=temp; break;
        }
        else if(l4<l5){
            temp=l4; l4=l5; l5=temp; break;
        }
        else if(l5<l6){
            temp=l5; l5=l6; l6=temp; break;
        }
        else{x=false;}
    }
    total_marks += (l1+l2+l3+l4+l5);

    return p;
}
int midsem_marks(){
    int mm; cin>>mm; return mm;
}
int endsem_marks(){
    int em; cin>>em; return em;
}
bool project_marks(int &total_marks){
    int pm,p; cin>>pm>>p;
    if(total_marks>80){
        total_marks += pm;
    }
    return p;
}
int calculate_grade(int total_marks, bool plag_in_quiz, bool plag_in_lab, bool plag_in_project){
    int grade; int plagia;
    if(total_marks>30){
        grade = 1 + (total_marks/10);
    }
    else if(total_marks<=30){grade=0;}
    plagia = plag_in_lab + plag_in_quiz + plag_in_project;
    while(plagia>0){
        if(grade>4){
            grade -= 1;
        }
        else if(grade<=4){
            grade=0;
        }
        plagia -= 1;
    }
    return grade;
}
