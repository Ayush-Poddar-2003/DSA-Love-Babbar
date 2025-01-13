#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;  // front <--- rear

    q.push(10); // q = 10
    q.push(20); // q = 10 20
    q.push(30); // q = 10 20 30
    q.pop();    // q = 20 30
   
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;

    cout << "Printing Queue" << endl;
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}