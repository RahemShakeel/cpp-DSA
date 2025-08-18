#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//CONVERT TO LOWERCASE
void LowerCase(char word[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z') { //lowercase
            continue;
        } else {
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main () {
    char word[] = "MANGO";
    LowerCase(word, strlen(word));

    cout << word << endl;
    return 0;
}
