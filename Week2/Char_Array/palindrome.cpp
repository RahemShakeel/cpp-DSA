#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// VALID PALINDROME
bool ValidPalindrome (char str[], int n) {
    int st = 0, end = n-1;
    while (st < end) {
        if (str[st++] != str[end--]) {
            cout << "Not a valid Palindrome\n";
            return false;
        }
    }
    cout << "Valid Palindrome\n";
    return true;
}

int main () {
    char word [] = "racecar";
    ValidPalindrome (word, strlen(word));

    return 0;
}
