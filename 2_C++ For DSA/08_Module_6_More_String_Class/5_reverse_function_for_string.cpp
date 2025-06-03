#include<bits/stdc++.h>
using namespace std;

int main(){

   string s;
   getline(cin, s);

   //remove spaces
   s.erase(remove(s.begin(), s.end(), ' '), s.end());

   // reverse the string
   reverse(s.begin(), s.end());

   for(int i=0; i<s.size(); i++){
        cout << s[i] << " ";
   }

    return 0;
}