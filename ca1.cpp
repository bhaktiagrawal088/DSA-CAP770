#include<iostream>
using namespace std;
// int linearsearch(string mainstring , string searchstring){
//     int main_len = mainstring.length();
//     int search_len = searchstring.length();
//     for(int i = 0 ; i < main_len; i++){
//         bool found = true;
//         for(int j = 0 ; j < search_len; j++){
//             if(mainstring[i+j] != searchstring[j]){
//                 found = false;
//                 break;
//             }
//         }
//         if(found){
//             return 1;
//         }
//     }
//     return 0;
// }

int linearsearch(string mainstring , string searchstring , int i = 0){
    int main_len = mainstring.length();
    int search_len = searchstring.length();
    if(i > main_len){
        return 0;
    }
    bool found = true;
    for(int j = 0 ; j <search_len; j++){
        if(mainstring[i+j] != searchstring[j]){
            found = false;
            break;
        }
    }
    if(found){
        return 1;
    }
    return linearsearch(mainstring, searchstring, i+1);
}
int main(){
    string mainstring;
    getline(cin, mainstring);
    string searchstring;
    cin>>searchstring;
    int result = linearsearch(mainstring, searchstring);
    if(result == 1){
        cout<<"String is present";
    }
    else{
        cout<<"String is not present";
    }

}