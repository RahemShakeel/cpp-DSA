#include <iostream>
using namespace std;

// Custom Copy Constructor Example
class Car {
public:
    string name;
    string colour;

    Car(string name, string colour) {
        this->name = name;
        this->colour = colour;
    }

    // Custom Copy Constructor
    Car(Car &original) {
        cout << "copying original to new..\n";
        name = original.name;
        colour = original.colour;
    }
};

int main () {
    Car c1("BMW", "black");
    Car c2(c1); // calls custom copy constructor

    cout << c2.name << endl;
    cout << c2.colour << endl;

    return 0;
}
