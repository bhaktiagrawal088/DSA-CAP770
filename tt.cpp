#include<iostream>
using namespace std;
#define SIZE 10
const int a =10;
int main(){
    int t[SIZE];
    // a = 100; //error: read-only variable is not assign
    *(int*)(&a) = 200;//okay, but it's bad practice to do this. 
    // int b[a];
    cout<<a;
}