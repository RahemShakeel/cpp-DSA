#include <iostream>
using namespace std;

// Single Inheritance Example
class Animal {
public:
    string colour;

    void eat() {
        cout << "eats\n";
    }

    void breathe() {
        cout << "breathes\n";
    }
};

class Fish : public Animal {
public: 
    int fins;

    void swim() {
        cout << "swims\n";
    }
};

int main () {
    Fish f1;
    f1.swim();
    f1.eat();
    f1.breathe();
    return 0;
}
