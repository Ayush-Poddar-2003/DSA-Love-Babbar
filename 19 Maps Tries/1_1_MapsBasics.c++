#include<iostream>
#include<map> //for ordered map
#include<unordered_map> //for unordered map

using namespace std;

int main(){
    //creation
    map<int, string> oMap;
    unordered_map<int, string> uMap;

    //Taking example of ordered map        
    oMap[1] = "Ayush"; //<1, "Ayush">
    oMap[3] = "Aditi"; //<3, "Aditi">
    oMap[2] = "Loves"; //<2, "Loves">

    for(auto i:oMap){
        cout << i.first << "->" << i.second << endl;
        //oMap auto arranges according to key
        /*1->Ayush
          2->Loves
          3->Aditi */
    }

    //find()
    if(oMap.find(3)==oMap.end()) //end tk aa gye mtlb nhi mila
        cout << "Not Found";
    else 
        cout << "Found";

    //count() : if no of item==0 => not found
    if(oMap.count(4)==0) 
        cout << "\nNot Found";
    else 
        cout << "\nFound";

    return 0;
}