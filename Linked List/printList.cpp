#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    Node(int data, Node* next){
        this->data = data;
        this->next = next;        
    }
    Node (int data){
        this->data = data;
        this->next = nullptr;
    }
};
Node* traversalList(int* arr , int size){
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i=1; i < size;i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
}
int printlength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != nullptr){
        temp = temp->next;
        count++;
    }
    return count;

}
int isPresent(Node* head, int val){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}
void print(Node* head){
    while(head!= nullptr){
        cout<<head->data << " ";
        head = head->next;
    }
}
Node* removehead(Node* head){
    if(head == nullptr)return head; // empty list
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main(){
    int arr[] = { 1, 2 , 3, 4};
    Node* head = traversalList(arr, sizeof(arr)/sizeof(arr[0]));
    Node* temp = head;
    cout << "The linked list is : ";
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"length : " <<printlength(head)<<endl;
    cout<<"Element is present or not "<<endl;
    cout<<isPresent(head, 5)<<endl; // should be 0 as there is no element 5 in the array.
    cout<<isPresent(head, 3)<<endl;
    cout<<"Remove first element of an array : ";
    head=removehead(head);
    print(head);
    return 0;
}