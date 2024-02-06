#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int num;
    cout<<"Enter the number of elements in array: ";
    cin>>num;
    if(num<100){
        cout<<"\nEnter "<<num<<" numbers : \n";
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        cout<<"Elements are:\n";
        for(int j=0;j<num;j++) {    
            cout << arr[j] << " ";
        }cout<<endl;
        int index,element;
        cout<<"Enter a element"<<endl;
        cin>>element;
        cout<<"Enter a index number "<<endl;
        cin>>index;
        if(index >= num){
            cout<<"Index is out of bound\n";
            return -1;
        }else{
            for (int k = num - 1; k >= index; k--){
            arr[k+1]=arr[k];
        }
        arr[index]=element;
        }
        cout<<"After Insertion\n";
        for(int i=0;i<=num;i++){
            cout << arr[i] <<" ";
        }cout<<endl;
    }
    else{
        cout<<"Invalid  input! Number should be less than 100.";
    }
    return 0;
}
