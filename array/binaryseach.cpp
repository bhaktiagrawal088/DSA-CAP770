#include<iostream>
using namespace std;
int main(){
    int arr[100];
    cout<<"Enter how many element in arr";
    int n; cin>>n;
    cout<<"Enter " << n << " element"<<endl;
    for(int i =0 ; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a search element " <<endl;
    int key ; cin>>key;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high )/2;
        if(arr[mid] == key){
            cout<<"Element is found "<<arr[mid];
            return 0;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<"Element is not found";
    return -1;
}