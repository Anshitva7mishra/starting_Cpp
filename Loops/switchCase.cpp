#include<iostream>
using namespace std;

int main(){
    int decide;
    cout << "Enter decide variable(btw. 1 to 4 inclusive): ";
    cin >> decide;
    switch(decide){
        case 1:
            cout << "Morning";
            break;
        case 2:
            cout << "Afternoon";
            break;
        case 3:
            cout << "Evening";
            break; 
        case 4:
            cout << "Night";
            break;
        default:
            cout << "Mai nhi bataunga!!!!";       
    }
}