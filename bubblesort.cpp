#include<iostream>
using namespace std;
// void bubblesort(int arr[], int n){
//     for(int i = n-1 ; i >= 0; i--){
//         int didswap = 0;
//         for(int j = 0 ; j <= i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//                 didswap = 1;
//             }
//         }
//         if(didswap == 0){
//             break;
//         }
//     }
// }

void bubblesort(int arr[] , int n){
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                // int temp = arr[j+1];
                // arr[j+1] = arr[j];
                // arr[j] = temp; 
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}
void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of an array"<<endl;
    for(int i =0 ; i< n ;i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);
    cout<<"After the sorting"<<endl;
    for(int i =0 ; i < n;i++){
        cout<<arr[i]<<" ";
    }
}