#include <iostream>
using namespace std;

// Multi-Level Inheritance Example
class Animal {
public:
    void eat() {
        cout << "eats\n";
    }

    void breathe() {
        cout <<"breathes\n";
    }
};

class Mammal : public Animal {
public: 
    string bloodType;

    Mammal () { 
        bloodType = "warm";
    }
};

class Dog : public Mammal {
public:
    void tailwag() {
        cout << "a Dog wags its tail\n";
    }
};

int main () {
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout << d1.bloodType << endl;
    return 0;
}
