#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void Optimal(vector<int> arr, int n)
{
    stack<int> st;
    st.push(-1);

    vector<int> ans;

    for(int i=0;i<n;i++){
        int ele = arr[i];
        while(st.top()>ele){
            st.pop();
        }
        ans.push_back(st.top());
        st.push(ele);
    }

    for(auto it: ans){
        cout << it << " ";
    }

}

int main()
{
    vector<int> arr = {8,4,6,3,2};

    Optimal(arr, 5);

    return 0;
}