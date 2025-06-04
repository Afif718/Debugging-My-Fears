#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // size_t is an unsigned data type used to represent sizes or indices (like int but always >= 0)
    // s.find("EGYPT") returns the index of the first occurrence of "EGYPT" in the string
    // If not found, it returns string::npos
    //size_t pos = s.find("EGYPT");
    int pos = s.find("EGYPT");

    // string::npos means "not found". We loop as long as we keep finding "EGYPT" in the string.
    while (pos != string::npos) {
        // Replace 5 characters from the position 'pos' with a space
        s.replace(pos, 5, " ");

        // Find the next occurrence of "EGYPT" after the previous one
        pos = s.find("EGYPT", pos + 1);
    }

    // Print the updated string
    cout << s << endl;

    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V