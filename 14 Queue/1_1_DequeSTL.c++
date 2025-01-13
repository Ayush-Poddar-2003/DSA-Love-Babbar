#include<iostream>
#include<queue>

using namespace std;

int main()
{
    deque<int> dq;

    dq.push_front(10);     //dq = 10
    dq.push_front(20);     //dq = 20 10   
    dq.push_front(30);     //dq = 30 20 10   
    dq.push_back(0);       //dq = 30 20 10 0 
    dq.push_front(40);     //dq = 40 30 20 10 0 
    dq.pop_back();         //dq = 40 30 20 10   
    dq.pop_front();        //dq = 30 20 10    


    cout << "\nPrinting Queue" << endl;
    while(!dq.empty()){
        cout << dq.front() << " ";
        dq.pop_front();
    }

    return 0;
}