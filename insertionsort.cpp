#include<iostream>
using namespace std;
// void insertionsort(int arr[] , int n){
//     for(int  i = 0 ; i <= n-1 ; i++){
//         int j = i;
//         while(j> 0 && arr[j-1] > arr[j]){
//             swap(arr[j] , arr[j-1]);
//             j--;
//         }
//     }
// }
void insertionsort(int arr[], int n){
    if(n == 1){
        return;
    }
    insertionsort(arr, n-1);
    int j = n-1;
    while(j>0 && arr[j-1]> arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
    }
}
void swap(int &a, int &b){
    int temp = a;
    a = b ;
    b = temp;
}
int main(){
    int n ; cin>>n;
    int arr[n];
    for(int i = 0 ; i < n;i++){
        cin>>arr[i];
    }
    insertionsort(arr, n);
    cout<<"After swapping "<<endl;
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i] <<" ";
    }
}