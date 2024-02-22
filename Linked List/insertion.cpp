#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data, Node* next){
            this->data = data;
            this->next = next;
        }
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};
void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* inserthead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}
Node* insertTail(Node* head, int val){
    if(head == nullptr){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}
Node* insertPosition(Node* head, int value, int pos) { 
    if(head == nullptr){
        if(pos == 1){
            return new Node(value);
        }
        else{
            return head;
        }
    }
    if(pos == 1){
        Node* newHead = new Node(value, head);
        return newHead;
    }
    int cnt = 0 ;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == pos-1){
            Node* newhead = new Node(value , temp->next);
            temp->next = newhead;
            break;
        }
        temp = temp->next;

    }
    return head;
}
Node* insertBeforeValue(Node* head, int  value, int before_value){
    if(head == nullptr){
        return nullptr;
    }
    if(head->data == before_value){
        return new Node(value, head);
    }
    Node* temp = head;
    while(temp->next != nullptr){
        if(temp->next->data == before_value){
            Node* newhead = new Node(value, temp->next);
            temp->next = newhead;
            break;
        }
        temp  = temp->next;
    }
    return head;
}
int main(){
    int arr[]  = { 1, 2, 3, 4, 5};
    // Create a new node for the linked list
    Node* head = new Node(arr[0]);
    int size =  sizeof(arr)/sizeof(arr[0]);
    Node* temp = head;
    for(int i = 1 ; i<size; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    cout<<"Linked list: ";
    printList(head);
    cout<<"\nInsert at beginning of Linked List: ";
    head = inserthead(head, 8);
    printList(head);
    cout<<"\nInsert at last  of Linked List: ";
    head = insertTail(head,6);
    printList(head);
    cout<<"\nInsert the element in between two elements of Linked List :";
    head = insertPosition(head,9,3);
    printList(head);
    cout<<"\nInsert the value before the value in Linked List :";
    head = insertBeforeValue(head,10,2);
    printList(head);
    return 0;
}