#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> &st, int count)//by reference
{
    //Base Case
    if(count==0){
        cout << st.top() << endl;
        return;
    }

    //solving 1 case
    int topElement = st.top();
    st.pop();
    count--;

    //baaki recursion
    printMiddle(st, count);

    //backtrack
    st.push(topElement);

}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int count = st.size()/2;

    printMiddle(st, count);


    return 0;
}