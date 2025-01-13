#include<iostream>
#include<stack>
using namespace std;

//Reccursive Approach
void insertAtBottom(stack<int> &st, int value)
{
    if(st.empty())
    {
        st.push(value);
        return;
    }

    //store top element and pop
    int topelement = st.top();
    st.pop();
    //call fun again with popped stack
    insertAtBottom(st, value);
    //start pushing all popped elements
    st.push(topelement);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int value = 13;

    insertAtBottom(st, value);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }


    return 0;
}