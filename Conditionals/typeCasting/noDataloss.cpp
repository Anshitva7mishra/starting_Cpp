#include<iostream>
using namespace std;

// bool == char --> int --> double --> ....
int main(){
    int a =10;
    char c = 'b';
    a = c;
    cout << a << endl;
}