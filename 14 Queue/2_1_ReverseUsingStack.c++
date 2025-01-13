// Can be done using recursion/stack

#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        st.push(element);
    }
    //reversing
    while(!st.empty()){
        int element = st.top();
        st.pop();
        q.push(element);
    }
}

void print(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    print(q);

    reverseQueue(q);

    print(q);

    return 0;
}