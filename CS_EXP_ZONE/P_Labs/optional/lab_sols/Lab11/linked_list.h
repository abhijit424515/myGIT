#include <iostream>

const int MAX_SIZE=50;

struct Node{
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
};

struct LinkedList{
    Node* head;
    Node nodepool[MAX_SIZE];
    int size;

    LinkedList(){
        head = NULL;
	size=0;
    }

    LinkedList(int arr[], int n){
      //We are leaving this unimplemented as an exercise.
    }

    LinkedList(Node *head){
        this->head = head;
    }

    Node* getHead(){
        return head;
    }

    void print(){
        Node* curr = head;
        while(curr != NULL){
            std::cout << curr->data << " ";
            curr = curr->next;
        }
        std::cout << std::endl;
    }

    int length(){
        Node* curr = head;
        int count = 0;
        while(curr != NULL){
            count++;
            curr = curr->next;
        }
        return count;
    }

    bool find(int val){
        Node* curr = head;
        while(curr != NULL){
            if(curr->data == val){
                return true;
            }
            curr = curr->next;
        }
        return false;
    }

    //Inserts into the next available member from the nodepool
    //Does not check if the nodepool is full or not, so make sure
    //all MAX_SIZE nodes are not used up - else this will cause an error
    void insert(int val){
        if(find(val)){
            return;
        }

        if(head == NULL){
	  nodepool[0].data=val;
	  nodepool[0].next=NULL;
	  head = &nodepool[0];
	  size++;
	  return;
        }
        
        if(head->data > val){
	  nodepool[size].data=val;
	  nodepool[size].next=head;
	  head = &nodepool[size];
	  size++;
	  return;
        }

        Node* curr = head;
        while(curr->next != NULL){
            if(curr->next->data < val){
                curr = curr->next;
            }else{
                break;
            }
        }

        if(curr->next == NULL){
	    nodepool[size].data=val;
	    nodepool[size].next=NULL;
	    curr->next = &nodepool[size];
	    size++;
            return;
        }

	nodepool[size].data=val;
	nodepool[size].next=curr->next;
	curr->next = &nodepool[size];
	size++;
  }

    //This merge is cross linking across the nodepools of both lists
    void merge(LinkedList &list){
        // merge two sorted linked lists
        Node* a = head;
        Node* b = list.head;

        if(b == NULL){
            return;
        }

        if(a == NULL){
            head = b;
            return;
        }

        Node* tempHead = NULL;
        if(a->data < b->data){
            tempHead = a;
            a = a->next;
        }else if(a->data > b->data){
            tempHead = b;
            b = b->next;
        }else{
            tempHead = a;
            a = a->next;
            b = b->next;
        }

        Node* tempTail = tempHead;

        while(a != NULL && b != NULL){
            Node* temp = NULL;
            if(a->data < b->data){
                temp = a;
                a = a->next;
            }else if(a->data > b->data){
                temp = b;
                b = b->next;
            }else{
                temp = a;
                a = a->next;
                b = b->next;
            }

            tempTail->next = temp;
            tempTail = temp;
        }
        

        if(a == NULL){
            tempTail->next = b;
        }else{
            tempTail->next = a;
        }

        this->head = tempHead;  
    }

    //Deleting a node is just removing the node from the list, changing that node's next pointer to NULL
    //and setting its data value to -999.
    //This does not make this node available for use though - so this solution is inefficient
    //in terms of memory.
    //A better solution is to use dynamically allocated memory using new/delete
    void delete_node(int val){
        Node* curr = head;
        if(curr->data == val){
            head = curr->next;
            delete curr;
            return;
        }

        while(curr->next != NULL){
            if(curr->next->data == val){
                Node* temp = curr->next;
                curr->next = curr->next->next;
                temp->data=-999;
		temp->next=NULL;
                return;
            }
            curr = curr->next;
        }
    }

};
