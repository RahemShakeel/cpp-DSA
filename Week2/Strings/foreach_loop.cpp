#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//For Each Loop
int main () {
    string str = "Hello World";
    for (char ch : str) {
        cout << ch << ',';
    }
    return 0;
}
