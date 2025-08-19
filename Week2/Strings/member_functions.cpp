#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//MEMBER FUNCTIONS
int main () {
     string str = "hello world hello world";

     cout << str.length() << endl;
     cout << str.at(3) << endl;
     cout << str.substr(1, 6) << endl; 
     cout << str.find("world") << endl;
     cout << str.find("world", 12) << endl;

     return 0;
}
