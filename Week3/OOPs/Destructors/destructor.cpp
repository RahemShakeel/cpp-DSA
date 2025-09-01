//Destructor
#include <iostream>
using namespace std;

class Car {
    public:
        string name;
        string colour;
        int *mileage;

    Car(string name, string colour) {
        this -> name = name;
        this -> colour = colour;
        mileage = new int; //Dynamically Allocated
        *mileage = 12;
    }

    Car(Car &original) {
        cout << "copying original to new..\n";
        name = original.name;
        colour = original.colour;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car() {
        cout << "Deleteing object...\n";
        if(mileage!= NULL) {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main () {
    Car c1("BMW", "black");
    cout << c1.name <<endl;
    cout << c1.colour <<endl;
    cout << *c1.mileage << endl;

    return 0;
}
