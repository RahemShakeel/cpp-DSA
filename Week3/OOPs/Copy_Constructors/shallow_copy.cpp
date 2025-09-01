#include <iostream>
using namespace std;

// Shallow Copy Example
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

    // Shallow Copy Constructor
    Car(Car &original) {
        cout << "copying original to new..\n";
        name = original.name;
        colour = original.colour;
        mileage = original.mileage; // points to the same memory
    }
};

int main () {
    Car c1("BMW", "black");
    Car c2(c1);

    cout << c2.name << endl;
    cout << c2.colour << endl;
    cout << *c2.mileage << endl;

    // change value in c2
    *c2.mileage = 10;

    // also affects c1
    cout << *c1.mileage << endl;

    return 0;
}
