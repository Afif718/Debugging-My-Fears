#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b, c;
    char s, q;

    cin >>a >> s >> b >> q >> c;

    //cout << s << " " << q;

    if(s == '+'){
        
        a+b==c? cout << "Yes" : cout << a+b; 
    }

    if(s == '-'){
        
        a-b==c? cout << "Yes" : cout << a-b; 
    }

    if(s == '*'){
       
        a*b==c? cout << "Yes" : cout << a*b; 
    }

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W