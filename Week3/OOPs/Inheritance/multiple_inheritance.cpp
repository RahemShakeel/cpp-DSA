#include <iostream>
using namespace std;

// Multiple Inheritance Example
class Teacher {
public:
    int salary;
    string subject;
};

class Student {
public:
    int rollno;
    float gpa;
};

class TA : public Teacher, public Student {
public:
    string name;
};

int main() {
    TA ta1;
    ta1.name = "Alex";
    ta1.subject = "C++";
    ta1.gpa = 3.9;

    cout << ta1.name << endl;
    cout << ta1.subject << endl;
    cout << ta1.gpa << endl;
    return 0;
}
