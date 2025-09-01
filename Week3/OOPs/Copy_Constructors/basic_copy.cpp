#include <iostream>
using namespace std;

// Copy Constructor Example
class Car {
public:
    string name;
    string colour;

    Car(string name, string colour) {
        this->name = name;
        this->colour = colour;
    }
};

int main () {
    Car c1("BMW", "black");
    Car c2(c1); // default copy constructor

    cout << c2.name << endl;
    cout << c2.colour << endl;

    return 0;
}
