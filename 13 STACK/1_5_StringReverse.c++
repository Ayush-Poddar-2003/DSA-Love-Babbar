#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<char> st;
    string name = "AYUSH";
    
    //Insertion
    for(int i=0;i<name.length();i++){
        st.push(name[i]);
    }

    //Popping
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }

    return 0;
}