#include <iostream>
using namespace std;

// Hierarchical Inheritance Example
class Animal {
public:
    void eat() {
        cout << "eats\n";
    }
    void breathe() {
        cout <<"breathes\n";
    }
};

class Bird : public Animal {
public:
    void fly() {
        cout << "flys\n";
    }
};

class Fish : public Animal {
public:
    void swim() {
        cout << "swims\n";
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "walks\n";
    }
};

int main() {
    Bird b1;
    b1.eat();
    b1.fly();

    Fish f1;
    f1.breathe();
    f1.swim();

    Mammal m1;
    m1.eat();
    m1.walk();

    return 0;
}
