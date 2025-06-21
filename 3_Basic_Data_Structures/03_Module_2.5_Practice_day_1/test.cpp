#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int v[1005]; // size up to 1000 as per constraints

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int count_element = 0;

    for(int i = 0; i < n; i++) {
        int found = 0;

        for(int j = 0; j < n; j++) {
            if(v[i] + 1 == v[j]) {
                found = 1;
                break; // no need to keep checking, we found it
            }
        }

        if(found) {
            count_element++;
        }
    }

    cout << count_element << endl;

    return 0;
}
