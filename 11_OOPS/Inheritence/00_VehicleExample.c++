#include <iostream>
using namespace std;


class Vehicle
{
protected:
    string name;

public:
    string model;
    int noOfTyres;

    //Getter
    string getName()
    {
        return this->name;
    }

    // Constructor
    Vehicle(string name, string model, int noOfTyres)
    {
        cout << "Inside vehicle constructor\n";
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }

    //Methods
    void startEngine()
    {
        cout << name << " of model " << model << " started" << endl;
    }
    void stopEngine()
    {
        cout << name << " of model " << model << " stopped" << endl;
    }
};


// Sub class
class Car : public Vehicle
{
public:
    int noOfDoors;
    string transmissionType;

    //Constructor se derived aur parent dono ko initalize krwa rhe
    Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres)
    {
        cout << "Inside Car Constructor\n";
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
    }

    void startAC()
    {
        cout << "AC started of " << name << endl;
    }
};


int main()
{
    Car A("Kia", "2024", 4, 4, "SemiAutomatic");

    A.startEngine();
    A.startAC();
    A.stopEngine();

    return 0;
}