#include<iostream>
using namespace std;

void lastOccLTR(string &s, char x, int &pos, int i){
    //base case
    if(i>s.size())
        return;

    if(s[i]==x)
        pos = i;

    lastOccLTR(s, x, pos, i+1);
}

void lastOccRTL(string &s, char x, int &pos, int i){
    if(i<0)
        return;

    if(s[i]==x){
        pos = i;
        return;
    }

    lastOccRTL(s, x, pos, i-1);
}

void reverseStr(string &s, int l, int r){
    // base case    
    if(l>=r)
        return;

    swap(s[l], s[r]);

    reverseStr(s, l+1, r-1);
}

void checkPal(string s, int i, int j){
    if(i>=j){
        cout << "Yes";
        return;
    }

    if(s[i]!=s[j]){
        cout << "False";
        return;
    }
    checkPal(s, i+1, j-1);

}

void printSubString(strin s){
    
}


int main()
{

    string s = "R";
    char x = 'h';
    int pos = -1;

    // lastOccLTR(s, x, pos, 0);
    // lastOccRTL(s, x, pos, s.size()-1);
    // cout << x << " found at " << pos << endl;

    //-----------------------------------------

    // reverseStr(s, 0, s.size()-1);
    // cout << s;

    //-----------------------------------------
    // checkPal(s, 0, s.size()-1);

    return 0;
}


/*
SC: O(N) = TC
*/