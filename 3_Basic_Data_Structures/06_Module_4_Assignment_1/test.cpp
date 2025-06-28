#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int space=0;

    int mid_point = (n-1)/2;

    for(int i=0; i<=mid_point; i++){

         // Print increasing spaces (0, 1, 2, ...)
        for (int s = 0; s < space; s++) {
            cout << " ";
        }

        if(i==mid_point){
            cout << "X";
        } else{
            cout << "\\";
            
            // Print inner spaces → formula: n - 2*i - 2
            int inner_spaces = n - 2 * i - 2;
            for (int s = 0; s < inner_spaces; s++) {
                cout << " ";
            }

            cout << "/";
        }

        cout << "\n";
        space++;
    }
    return 0;
}