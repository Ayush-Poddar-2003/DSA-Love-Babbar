#include<iostream>
using namespace std;

class Add{
public:
    int sum(int x, int y){
        return x+y;
    }

    double sum(double x, double y){
        return x+y;
    }

    int sum(int x, int y, int z){
        return x+y+z;
    }


};

int main(){
    Add aa;
    cout << aa.sum(5,6) << endl;
    cout << aa.sum(5.5, 6.6) << endl;
    cout << aa.sum(5,6,7) << endl;
    return 0;
}