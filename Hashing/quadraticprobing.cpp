#include<iostream>
using namespace std;
int main(){
    int arr[20];
    for(int i = 0 ; i< 20; i++){
        arr[i] = -1;
    }
    int key;
    int flag = 1;
    while(flag){
        cout<<"Enter the key"<<endl;
        cin>>key;
        int index = key % 20;
        if(arr[index] == -1){
            arr[index] = key;
        }
        else{
            while(arr[index] != -1 && index < 20){
                index
            }
        }

    }
}