#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,8,3,9};
    // Find  the largest element using while loop
    int max = arr[0];
   for(int i =0; i < 6 ; i++){
    if(max < arr[i]){
        max = arr[i];
   }
   }
    cout<<"The largest element is : "<<max;
    return 0;
}