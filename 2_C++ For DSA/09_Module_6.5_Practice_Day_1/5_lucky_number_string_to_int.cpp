#include<bits/stdc++.h>
using namespace std;

int main(){

    int num_of_test_cases;
    cin >> num_of_test_cases;

    cin.ignore(); // ignore the first enter 

    for(int i=1; i<=num_of_test_cases; i++){

        string s;
        getline(cin, s);

        //first half
        int first_half_sum = 0;
        for(int i=0; i<(s.size()/2); i++){
            //cout << i <<endl;
            first_half_sum += ((int)s[i] - '0');
        }

        //cout << endl; 

        //last half
        int last_half_sum = 0;
        for(int i=(s.size() -1); i>=(s.size()/2); i--){
            //cout << i << endl;
            last_half_sum += ((int)s[i] - '0');
        }

        //cout << s.size() <<endl;

        //cout << first_half_sum << " " << last_half_sum;

        if(first_half_sum == last_half_sum){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }

    
    return 0;
}