#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10, 11, 12, 13, 14, 15};
    cout<<"Original array: ";
    int size = sizeof(arr)/ sizeof(arr[0]);
    for(int i : arr){
        cout << i << " ";
    }
    cout<<endl;

    arr[0] = 0;

    for(int i= 1; i< size ; i++ ){
        int a = arr[i];
        if(a == 0) break;
        if(a != 0){
            if( a*a <= size){
                for(int j = i+1; j <size; j++){
                    if(arr[j] % arr[i] == 0)
                        arr[j] = 0;
                }
        }
    }
    }
    cout<<"Prime number is :"<<endl;
    for(int j :  arr )
        if(j!=0){
        cout << j << " ";
    }
    cout << endl;
    return 0;
}
