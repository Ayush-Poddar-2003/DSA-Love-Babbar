#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    cout << st.top() << endl;

    st.push(20);
    cout << st.top() << endl;

    cout << "Stack's Size : " << st.size() << endl;

    cout << "Is Stack empty: " << st.empty() << endl;

    st.pop(); //removes top element
    cout << st.top() << endl;

    return 0;
}