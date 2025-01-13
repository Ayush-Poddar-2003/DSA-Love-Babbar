#include<iostream>
#include<vector>
using namespace std;

void printSubSequence(string str, int i, string output, vector<string> &ans)
{
    if(i==str.length()){
        ans.push_back(output);
        return;
    }

    char ch = str[i];

    //include ch
    printSubSequence(str, i+1, output+ch, ans);

    //exclude ch
    printSubSequence(str, i+1, output, ans);
}

int main(){
    string str = "abc";
    string output = "";
    int index = 0;  
    vector<string> ans;

    printSubSequence(str, index, output, ans);

    for(auto i:ans){
        cout << i <<" ";
    }

    return 0;
}