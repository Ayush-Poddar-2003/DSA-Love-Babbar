#include<iostream>
#include<stack>
#include<climits>
using namespace std;

bool checkSorted(stack<int> st, int ele1){
    //Base case
    if(st.empty()){
        return 1;
    }

    //1 khud solve
    int ele2 = st.top();
    st.pop();

    if(ele2 < ele1){
        bool fans = checkSorted(st, ele2);
        return fans;
    }

    else{
        return false;
    }


}


int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int ele1 = INT_MAX;

    cout << checkSorted(st, ele1);

    return 0;
}