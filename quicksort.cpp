#include<iostream>
using namespace std;
void swap(int *x, int *y) ;
int pivotfn(int arr[], int low, int high); 
void Quicksort(int arr[], int low, int high) {
    if(low < high){
        int partition = pivotfn(arr, low, high);
        Quicksort(arr, low, partition-1);
        Quicksort(arr, partition+1, high);
    }
}
int pivotfn(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i<= high-1) i++;
        while(arr[j] > pivot && j >= low+1 ) j--;
        if(i<j){
            swap(&arr[i], &arr[j]);
        }
     } 
    swap(&arr[low], &arr[j]);
    return j;
}
/* A utility function to swap two elements of array */
void swap(int *x, int *y) {
   int temp = *x;
   *x = *y;
   *y = temp;
}

int main(){
    int arr[] = { 4,6,8,3,2,9,1,7,5};
    cout << "Original array: \n";
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // sorting array using quick sort

    Quicksort(arr , 0 , size-1);
    
    cout << "\nSorted array :\n";
    for (int i=0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}