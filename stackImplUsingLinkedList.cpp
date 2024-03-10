#include<iostream>
#include<stack>
using namespace std;
class Node{

public:
    int data;
    Node* next;
    Node(int data){
        this-> data = data;
        next = nullptr;
    }
};
class Stack{
    private :
        Node *top;
    public :
        Stack(){
            top = nullptr;
        }
        bool isEmpty(){
            return top == nullptr;
        }
        void push(int data){
            Node* newNode = new Node(data);
            if(isEmpty()){
                top = newNode;
            }
            else{
                newNode->next = top;
                top = newNode;
            }
        }
        int pop(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                int data = top->data;
                Node* temp = top;
                top = top->next;
                delete temp;
                return data;
            }
        }
        int peek(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                return top->data;

            }
        }
        void display(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
            }
            else{
                Node* temp = top ;
                while(temp != nullptr){
                    cout<<temp->data<<" ";
                    temp = temp->next;
                }
                cout<<endl;
            }
        }

        
};
int main(){

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Stack elements: ";
    s.display();
    cout<<"Top element of the stack: "<<s.peek()<<endl;

    cout<<"Popped one element : "<<s.pop()<<endl;
    cout<<"Peek element : "<<s.peek()<<endl;

    cout<<"Stack element  after pop operation : " ;
    s.display();

}