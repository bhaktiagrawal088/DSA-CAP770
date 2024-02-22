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
    while(temp!= nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node* deletehead(Node* head){
    Node* temp = head;
    if(temp == nullptr || temp->next == nullptr){
        delete head;
        return nullptr;
    }
    head = head->next;
    delete temp;
    return head;
}
Node *deleteTail(Node* head){
    Node* temp = head;
    if(temp == nullptr || temp->next == nullptr){
        delete head;
        return nullptr;
    }
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

Node* deleteK(Node* head, int k){
    if( head == nullptr) return head;
    if(k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* deleteElement(Node* head  , int el){
    if(head->data == NULL){
        return head;
    }
    if(head->data == el ){
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp!= nullptr){
        if(temp->data == el){
        prev->next = prev->next->next;
        free(temp);
        break;
    }
    prev = temp;
    temp = temp->next;
    }
    return head;
}
int main(){
    int arr[] = {1,2,3,4,5};
    Node* head = new Node(arr[0]);
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* temp = head;
    for(int i=1; i<size; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    cout<<"Linked list : ";
    printList(head);
    cout<<"\nHead of modified linked list is: ";
    head = deletehead(head);
    printList(head);
    cout<<"\nTail of modified linked list is: ";
    head = deleteTail(head);
    printList(head);
    cout<<"\nRemove the 2 element from the linked list: ";
    head = deleteK(head , 2);
    printList(head);
    cout<<"\nRemove the 4 value from the linked list: ";
    head = deleteElement(head, 4);
    printList(head); 
    return 0;
    
}