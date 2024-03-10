#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int* arr;
    int size;
    int front ;
    int  rear ;
public:
    Queue(int n){
    size = n;
    arr = new int[size];
    front = -1;
    rear = -1;
}
void enqueue(int val){
    if((rear == size-1 && front == 0) || (front == rear+1)){
        cout<<"Queue is full"<<endl;
    }
    else if(front == -1){
        front = rear = 0;
    }
    else if(rear == size-1 && front != 0){
        rear = 0;
    }
    else{
        rear++;
    }
    arr[rear] = val;
}
int dequeue(){
    if(front == -1){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    int ans = arr[front];
    arr[front] = -1;
    if(front == rear){
        front = rear = -1;
    }
    else if(front == size-1){
        front = 0 ;
    }
    else{
        front++;
    }
    return ans;
}

void display(){
    if(front == -1){
        cout<<"Queue is empty";
    }
    else{
        cout<<"Queue element : "<<endl;
        while(!front == -1){
            
        }
    }
}

};
int main(){
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    


}
