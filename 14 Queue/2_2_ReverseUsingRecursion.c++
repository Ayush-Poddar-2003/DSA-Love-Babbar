// Can be done using recursion/stack

#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void reverseQueue(queue<int> &q){
    //base case
    if(q.empty())
        return;

    int frontElement = q.front();
    q.pop();
    reverseQueue(q);

    //BackTracking
    q.push(frontElement);
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