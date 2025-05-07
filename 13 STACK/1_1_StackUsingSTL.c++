#include<iostream>
#include<stack> //header file

using namespace std;

int main()
{
    stack<int> st; //Syntax

    st.push(10);
    cout << st.top() << endl; //10

    st.push(20);
    cout << st.top() << endl; //20

    cout << "Stack's Size : " << st.size() << endl; //2

    cout << "Is Stack empty: " << st.empty() << endl; //0

    st.pop(); //removes top element
    cout << st.top() << endl; //10

    return 0;
}