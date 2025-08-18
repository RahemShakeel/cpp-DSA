#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//Char Arrays and Strings

//Input using cin
int main() {
    char word [30];
    cin >> word;

    cout << "Your Word was: " << word << endl;
    cout << "Length: " << strlen(word) << endl; //Limitation: It does not count " " (space)

    return 0;
}
