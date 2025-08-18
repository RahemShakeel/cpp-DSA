#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//REVERSE A CHAR ARRAY
void reverse (char word[], int n) {
    int start = 0, end = n-1;
    while (start < end) {
        swap (word[start], word[end]);
        start ++;
        end --;
    }
}

int main () {
    char word[] = "code";
    reverse(word, strlen(word));

    cout << "reverse = " << word << endl;
    return 0;
}
