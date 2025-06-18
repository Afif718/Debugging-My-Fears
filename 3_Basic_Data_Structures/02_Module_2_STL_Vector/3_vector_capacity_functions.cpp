#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.clear(); // removes all elements
    cout << "Size after clear: " << v.size() << endl;

    // Don't access v[0], v[1], etc. here — it's empty

    // Resize and initialize with 4s
    v.resize(11, 4);

    cout << "Contents after resize: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " "; // Output: 4 4 4 4 4 4 4 4 4 4 4
    }

    cout << "\nIs vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    return 0;
}
