// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int key ;
//     cin>>key;
//     int low = 0;
//     int high = n-1;
//     bool found = false;
//     while(low<=high)
//     {
//         int mid = (low+high) /2;
//         if(arr[mid]==key)
//         {
//             cout<<"Element is present "<<mid<<endl;
//             return 0;
//             found = true;
//         }
//         if(arr[mid] < key){
//             low = mid+1;
//         }
//         else{
//             high = mid-1;
//         }
//     }
//     if(!found){
//         cout<<"Element is not present "<<endl;
//     }

// }

// Binary searching using recursion
#include<iostream>
using namespace std;
bool binarySearch(int arr[], int low, int high, int key){
    if(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == key){
            return true;
        }
        else if(arr[mid] < key){
            return binarySearch(arr, mid+1, high, key);
        }
        else{
            return binarySearch(arr, low, mid-1, key);
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key which you want to found"<<endl;
    cin>>key;
    int low = 0;
    int high = n-1;
    bool found = binarySearch(arr,low,high,key);
    if(found){
        cout<<"Element is present "<<endl;
    }
    else{
        cout<<"Element is not present "<<endl;
    }



}
