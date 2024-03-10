#include<iostream>
#include<stack>
using namespace std;
class Stack{
    private:
        int *arr;
        int top;
        int capacity;
    public:
        Stack(int size){
            capacity = size;
            arr = new int[capacity];
            top = -1;
        }
        ~Stack(){
            delete[] arr;
        }
        int  push(int x){
            if(top == capacity-1){
                cout<<"Stack Overflow"<<endl;
                return 0;
            }
            else{
                arr[++top] = x;
                cout<<x<<" is pushed into the stack"<<endl;
            }
        }   
        int pop(int x){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            else{
                arr[top--] = x;
                cout<<x<<"is poped  from the stack"<<endl;
            }
        }
        void display(){
            if(top == -1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Element in stack are : "<<endl;
                for(int i = top ; i >= 0 ; i--){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};
int main(){
    int value;
    Stack stack(10); //Creating a stack of size 10
    while(true){
    cout<<"Enter 1 for add an element"<<endl;
    cout<<"Enter 2 for delete an element"<<endl;
    cout<<"Enter  3 to display the elements in the stack"<<endl;
    cout<<"Enter 4 for exit"<<endl;
    int ch;
    cin>>ch;
    switch(ch){
        case 1 :    cout<<"Enter the value to push : "<<endl;
                    cin>>value;
                    stack.push(value);
                    break;
        case 2 :    cout<<"Popped element: "<<endl;
                    cin>>value;
                    stack.pop(value);
                    break;
        case 3 :    stack.display();
                    break;
                    
        case 4 :    exit(0);
                    break;

        default: cout<<"Invalid choice";
    }    
    }         
    return 0;
}
