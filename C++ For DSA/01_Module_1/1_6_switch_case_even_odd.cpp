#include<iostream>
using namespace std;

int main(){

    int num;
    cin >> num;

    switch(num%2){
        case 0:
            cout << "Even\n";
            break;
        case 1:
            cout << "Odd\n";
            break;
    }
    return 0;
}