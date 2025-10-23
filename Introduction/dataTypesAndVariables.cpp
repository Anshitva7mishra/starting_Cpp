#include<iostream>
using namespace std;
int main(){

    int a = 10;
    long int b = 20345678;
    long long int c = 234456789234;

    float f = 2.34;
    double d = 2.12345678;

    char ch = 'a';

    string s = "Hello";

    bool l = 0;
    bool k = true;

    cout << a << " " << b << " " << c << endl;
    cout << f << " " << d << endl;
    cout << ch << endl;
    cout << s << endl;
    cout << l << " " << k << endl;

    // Size in bytes....
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(bool) << endl;
}