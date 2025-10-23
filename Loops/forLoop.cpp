#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<=n; i++){
        int sq = i*i;
        cout << "Square of " << i << " is: " << sq << endl;
        sq = 0;
    }
}