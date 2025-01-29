// Find the next smaller element to the right of current element

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void BruteForce(vector<int> arr, int n)
{
    vector<int> ans;
    int flag=0;

    for(int i=0;i<n;i++){
        if(i==n-1){
            ans.push_back(-1);
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                ans.push_back(arr[j]);
                flag=1;
                break;
            }
            if(flag==0)
                ans.push_back(-1);
        }
    }

    for(int it : ans){
        cout << it << " ";
    }
}

void Optimal(vector<int> &arr, int n)
{
    vector<int> ans;

    stack<int> st;
    st.push(-1);
    
    //From back
    for(int i=n-1;i>=0;i--)
    {
        int ele = arr[i];

        //Jb tk right me bda h pop krte rho
        while(st.top()>ele){
            st.pop();
        }

        //Chota mila to ans me daalo
        ans.push_back(st.top());
        st.push(ele);
    }

    reverse(ans.begin(), ans.end());

    for(int ele:ans){
        cout << ele << " ";
    }
}

int main(){

    vector<int> arr = {8,4,6,3,2};
    int n=5;

    // BruteForce(arr, n);
    Optimal(arr, n);

    return 0;
}