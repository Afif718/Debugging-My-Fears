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
    cout <<x <<std::endl << a <<std::endl <<d <<std::endl;

    //ascii value of character in c++
    char z = 'A';
    int ascii_a = z;
    cout<< "ASCII Value of " << z << " is " <<  ascii_a <<endl;

    //print ascii value using type-casting
    cout << "ASCII Value of " << z << " is " << (int) z <<endl;

    int v = 65;
    cout <<"Convert int value to Char " << x << " is " << (char)v;

    return 0;
}