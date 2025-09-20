#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

template <typename T>
class Graph{
public:

    unordered_map<T, list<T> >adj;

    void addEdge(T u, T v, bool direction){
        //creating edge from u to v
        adj[u].push_back(v);

        if(!direction){
            adj[v].push_back(u);
        }
    }

    void print(){
        for(auto it:adj){
            cout << it.first << " : ";
            for(auto jt:it.second){
                cout << jt << ", ";
            }
            cout << endl;
        }
    }

};

int main(){
    int n;
    cout << "Enter No. of nodes : " << endl;
    cin >> n;

    int m;
    cout << "Enter the no. of edges : " << endl;
    cin >> m;

    Graph<int> g; //Can change datatype accordingly

    //Taking edges as input
    for(int i=0;i<m;i++){
        int u, v;
        cin >> u >> v; 
        g.addEdge(u,v, false);
    }

    g.print();

    return 0;
}