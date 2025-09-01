#include <iostream>
using namespace std;

// Deep Copy Example
class Car {
public:
    string name;
    string colour;
    int *mileage;

    Car(string name, string colour) {
        this->name = name;
        this->colour = colour;
        mileage = new int; // dynamically allocated
        *mileage = 12;
    }

    // Deep Copy Constructor
    Car(Car &original) {
        cout << "copying original to new..\n";
        name = original.name;
        colour = original.colour;
        mileage = new int; // new memory allocation
        *mileage = *original.mileage; // copy value
    }
};

int main () {
    Car c1("BMW", "black");
    Car c2(c1);

    cout << c2.name << endl;
    cout << c2.colour << endl;
    cout << *c2.mileage << endl;

    // changing c2 does not affect c1
    *c2.mileage = 10;

    cout << *c1.mileage << endl;

    return 0;
}
