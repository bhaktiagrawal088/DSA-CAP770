#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the "<<n<<" Elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < n-1; i++){
        for(int j = 1 ; j < n-i; j++){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
        }
    }
    
    }
    cout<<"Sorted array is"<<endl;
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
}