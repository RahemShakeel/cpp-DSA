#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//<cstring> Functions
int main () {
    //1. strcpy
    char str1[100];
    char str2[100] = "hello world";
    strcpy(str1, str2);
    cout << str1 << endl;

    //2.strcat
    char str3[100] = "hello ";
    char str4[100] = "world";
    strcat(str3,str4);
    cout << str3 << endl;

    //2.strcmp
    char str5[100] = "mango";
    char str6[100] = "x";
    cout << strcmp(str5,str6) << endl; //prints -ve because x > m
    
    return 0;
}
