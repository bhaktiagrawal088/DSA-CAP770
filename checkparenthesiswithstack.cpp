#include<iostream>
using namespace std;

#define MAX 20
class Stack{
    private:
        char stk[MAX];
        int top;
    public:
        Stack(){
            top = -1
        }
        void push(char items){
            if(top == (MAX-1)){
            cout << "Stack is Full" << endl;
            }
            else{
                top++;
                stk[top] = items;
            }
        }
        void  pop(){
            if(top == -1){
                cout<<"Stack is Empty"<<endl;
            }
            else{
                top--;
            }
        }

}
int main(){

}