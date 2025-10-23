#include<iostream>
using namespace std;

// ... --> long long --> double --> int --> char == bool
int main(){
    char ch = 'b';
    int a = 10;
    ch = a;
    cout << ch << endl;
}