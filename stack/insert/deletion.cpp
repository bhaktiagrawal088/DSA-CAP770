#include<iostream>
#include<vector>
using namespace std;
int pushback(vector<int> &n){
    int el;
    cout<<"Enter the element";
    cin>>el;
    n.push_back(el);
    for(int i = 0 ; i < n.size() ; i++){
        cout<<n[i];
    }
}
int popback(vector<int> &n){
    if(n.empty()){
        return 0;
    }
    else{
        n.pop_back();
    }
}
int main(){
    cout<<"Enter 1 for add an element";
    cout<<"Enter 2 for delete an element";
    cout<<"Enter 3 for exit";
    vector<int> n;
    int ch;
    cin>>ch;
    switch(ch){
        case 1 :pushback(n);
                    break;
        case 2 :popback(n);
                break;
        case 3 : exit;
                break;
        default: cout<<"Invalid choice";
    }             

}