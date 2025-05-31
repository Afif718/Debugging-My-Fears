#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    //min
    // if(a<b){
    //     cout<<a <<endl;
    // } else {
    //     cout << b << endl;
    // }

    //min using buildin function 
    //cout << min(a,b) << endl;
    
    //we can input countless numbers in min function min ({1,2,3,4,5})
    //cout << min({44,3,2,4,6,1,66}) << endl;

    //find max
    //cout << max (a, b) << endl;

    //we can input countless numbers in max function min ({1,2,3,4,5})
    swap(a, b);
    cout << a << " " << b << " " <<endl;

    return 0;
}