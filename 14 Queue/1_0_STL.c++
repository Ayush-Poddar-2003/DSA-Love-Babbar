#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;  // front <--- rear

    q.push(10); // q =       10
    q.push(20); // q =    10 20
    q.push(30); // q = 10 20 30
    q.pop();    // q =    20 30
   
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;

    cout << "Printing Queue" << endl;
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    //------------------------------------

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