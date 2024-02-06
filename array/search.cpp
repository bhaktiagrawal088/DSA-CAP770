#include<iostream>
using namespace std;
int main(){

    int arr[3] = { 1, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    for(int i = 0 ; i< n; i++){
        if( arr[i] == k){
            cout << "Element is present at index : "<< i << endl;
            break;
        }
    }
    return -1;
}
