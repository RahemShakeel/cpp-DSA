#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//Input using .getline()
int main() {
    char sentence [50];
    cin.getline(sentence, 50);

    cout << "Your Word was: " << sentence << endl;
    cout << "Length: " << strlen(sentence) << endl;

    return 0;
}
