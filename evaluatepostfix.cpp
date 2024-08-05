#include<bits/stdc++.h>
using namespace std;
int evaluatepostfix(string exp){
    stack<char> st;
    int size=0;
    int value1, value2;
    
    for(int i = 0;i <exp.size() ; i++){
        if(exp[i]>='0' && exp[i]<='9'){
            st.push(exp[i]);
            size++;
        }
        else{
            if(size>1){
                 value1 = int(st.top());
                st.pop();
                size--;
                 value2 = int(st.top());
                st.pop();
                size--;

            }
            switch(exp[i]){
                case '+':
                    st.push(value1 + value2);
                    size++;
                    break;
                case '-':
                    st.push(abs(value2 - value1));
                    size++;
                    break;
                case '*':
                    st.push(value1 * value2);
                    size++;
                    break;
                case '/':
                    st.push(value2 / value1);
                    size++;
                    break;
            }
        }
    }
    int res = st.top();
    st.pop();
    size--;
    return res;

}
int main(){
    string exp = "51*4+";
    cout<<evaluatepostfix(exp);
    return 0;
}