#include <iostream>
using namespace std;

//Static Keyword
//for functions
void counter() {
    static int count = 0;
    count++;
    cout << "count : " << count << endl;
}

int main () {
    counter();
    counter();
    counter();

    //without the static keyword the answer will always be 1 in this case

    return 0;
}
