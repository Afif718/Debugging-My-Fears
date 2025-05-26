#include<iostream>
using namespace std;

int main(){

    int x;
    char a;
    double d;
    // std:: cin>> x;
    // std::cout<< x;

    //if i use it "using namespace std;" i dont have to writ std:: every time
    cin >> x >> a >> d;
    cout <<x <<std::endl << a <<std::endl <<d;

    //ascii value of character in c++
    char a = 'A';
    int ascii_a = a;
    cout<< ascii_a <<endl;

    return 0;
}