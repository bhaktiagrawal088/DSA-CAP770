#include<iostream>
#include<queue>
using namespace std;
class Queue{

public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(){
        int size = 1000;
        arr = new int[size];
        front = 0 ;
        rear = 0;
    }

    void push(int el){
        if(front == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]  = el;
            rear++;
        }
    }

    int pop(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0 ;
                rear = 0 ;
            }
            return ans;
        }
    }
    
    int peek(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main(){
    Queue q;
    q.push(5);
    q.push(4);
    q.push(4);

    cout<<"Front element : "<<q.peek()<<endl;
    cout<<"Poped element : "<<q.pop()<<endl;
    cout<<"Front element : "<<q.peek()<<endl;
    q.pop();
    q.pop();
    cout<<"After popping all elements, Front element : "<<q.peek()<<endl;
}
