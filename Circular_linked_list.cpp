
//Not working yet

#include<iostream>
#include<cstdlib>

using namespace std;

class Node{

    public:
        int data;
        Node* next = NULL;
};

void deleteNode(Node **head_ref) {

    int key;
    cout<<endl<<"Enter the data to be delete: ";
    cin>>key; 
    // Store head node 
    struct Node* temp = *head_ref, *prev; 
  
    // If head node itself holds the key to be deleted 
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 
} 

void display(Node** head){
    //Node* first = *head;
    Node* ptr = new(Node);
    ptr = *head;
    cout<<"\nPrinting the data: \n";
    if(ptr == NULL)
        return;
    do{

        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }while (ptr != *head && ptr->next != NULL && ptr != NULL);
}

void addNode(Node** head){

    Node* new_node = new(Node);
    cout<<endl<<"Enter data for the new node: ";
    cin>>new_node->data;

    Node* last = new(Node);
    last = *head;
    //Node* ptr = new(Node);
    //ptr = first;

    while(last->next != *head && last->next != NULL){
        //cout<<"Getting to the last\n";
        last = last->next;
    }
    new_node->next = *head;
    last->next = new_node;
    cout<<"Added successfully\n\n";
}

int main(){

    Node* first = new(Node);
    cout<<endl<<"Enter data for the new node: ";
    cin>>first->data;
    first->next = NULL;
    //const Node* head = first;

    int c = 0;

    while (c != 4){
        cout<<"Enter the choice\n1.Display\n2.Add new Node\n3.Delete Data\n4.Exit\n\nEnter choice: ";
        cin>>c;
        switch (c)
        {
        case 1:
            display(&first);
            /* code */
            break;
        case 2:
            addNode(&first);
            break;
        case 4:
            break;
        
        case 3:
            deleteNode(&first);
            cout<<"Delted successfully\n";
            break;
        default:
            break;
        }
    }
    

    return 0;
}