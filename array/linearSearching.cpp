#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i < n; i++){
        cin>>arr[i];
    }
    int key ;
    cout<<"Searching element";
    cin>>key;
    int count = 0; 
    for(int i = 0 ; i< n ; i++){
        if(key == arr[i]){
            cout<<"Element found at index "<<i<<endl;
            count++;
            continue;
        }
    }
    cout<<"Present in "<<count<<" times"<<endl;
    return 0;
}