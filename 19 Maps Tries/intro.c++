#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    unordered_map <string, int> omp;

    //Insertion
    pair<string, int> pair1 = make_pair("Ayush", 1);
    omp.insert(pair1);

    //Insertion method 2
    pair<string, int> pair2("Aditi", 2);
    omp.insert(pair2);

    //Method 3
    omp["Sonali"] = 3;
    //If we take the same key, it will update rather than creating a new entry
    omp["Sonali"] = 9;

    for(auto it:omp){
        cout << it.first << " -> " << it.second << endl;
    }

    //Searching
    cout << omp["Ayush"] << " " << omp["Aditi"] << " " << omp["Sonali"] << endl;
    // or 
    cout << omp.at("Ayush") << endl; //1

    //NOTE !!
    cout << omp["Unknown"] << endl; //if no key it will create entry with 0;
    cout << omp.at("Unknown") << endl; //if u run this first => error

    //SIZE
    cout << omp.size() << endl; //4 

    //TO check if something present
    cout << omp.count("Manjita") << endl; //0-> not present

    //Erase
    omp.erase("Aditi");
    cout << omp.size() << endl;

    //ITERATOR
    unordered_map<string, int> :: iterator it = omp.begin();
    while(it != omp.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    } //wont follow order in unordered map


    return 0;
}