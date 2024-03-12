#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = nullptr;
    }
};
class Queue{

    Node* front;
    Node* rear;

    public:
        Queue(){
           front = rear = nullptr;
        }
        void enqueue(int data){
            Node* newNode = new Node(data);
            if(front == nullptr){
                front = rear = newNode;
            }
            else{
                rear->next = newNode;
                rear = newNode;
            }
        }

        int dequeue(){
            if(front == nullptr){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else{
                int ans = front->data;
                Node* temp = front;
                if(front == rear){
                    front = rear  = nullptr;
                }
                else{
                    front = front->next;
                }
                delete temp;
                return ans;

            }
        }
        int peek(){
            if(front == nullptr){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else{
                return front->data;
            }
        }

        void display(){
            if(front == nullptr){
                cout<<"Queue is empty"<<endl;
            }
            else{
                Node* temp = front;
                while(temp != nullptr){
                    cout<<temp->data<<" " ;
                    temp = temp->next;
                }
                cout<<endl;
            }
        }

        bool isEmpty(){
            return (front==nullptr);
        }
};
int main(){
        Queue q;
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        cout<<"Queue element: ";
        q.display();
        cout<<"Front element: "<<q.peek()<<endl;
        q.dequeue();
        cout<<"Front element: "<<q.peek()<<endl;
        cout<<"Queue is empty or not :  " <<  (q.isEmpty() ? "Yes" : "No") << endl;
         q.dequeue();
         q.dequeue();
        cout<<"Front element: "<<q.peek()<<endl;
        cout<<"Queue is empty or not :  " <<  (q.isEmpty() ? "Yes" : "No") << endl;


}