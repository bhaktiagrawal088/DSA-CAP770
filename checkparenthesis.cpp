#include<iostream>
using namespace std;
int main(){
    char expression[50];
    int i = 0, x = 0;
    cout<<"Enter the expression";
    cin>>expression;
    while(expression[i]!='\0'){
        if(expression[i] == '('){
            x++;
        }
        else if(expression[i] == ')'){
            x--;
        }
        if(x < 0){
            break;
        }
    i++;
}
if(x == 0){
    cout<<"Expression is balanced";
}
else{
    cout<<"Expression is not balanced";
}
}