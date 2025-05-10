#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list<int> ll;

    ll.push_front(5); //5
    ll.push_front(4); //4->5
    ll.push_back(6);  //4->5->6

    //ITERATOR
    list<int>::iterator itr;
    return 0;
}