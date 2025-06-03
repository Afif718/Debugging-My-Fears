#include<bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin >> x;
    cin.ignore();

    string s;

    // cin >> s;
    //we previously used getline to take input with spaces but it only works for char array
    //cin.getline(s, 100); // for string it will not work as it's a static not dynamic

    //to get string as input use this
    getline(cin, s); // it will take string input with spaces
    cout << x << " " << s;
    return 0;
}