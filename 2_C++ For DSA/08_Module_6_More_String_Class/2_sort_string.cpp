#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "h e ll o wo r l d";

    //remove spaces from a string
    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    //then sort it
    sort(s.begin(), s.end());

    cout << s << endl;
    return 0;
}