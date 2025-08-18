#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//CONVERT TO UPPERCASE
void UpperCase(char word[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z') { //Uppercase
            continue;
        } else {
            word[i] = ch - 'a' + 'A';
        }
    }
}

int main () {
    char word[] = "ApPle";
    UpperCase(word, strlen(word));

    cout << word << endl;
    return 0;
}
