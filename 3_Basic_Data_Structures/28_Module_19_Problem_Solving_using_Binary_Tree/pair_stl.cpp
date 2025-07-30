#include <bits/stdc++.h>
using namespace std;

int main() {
    // -------------------------------------------------------------
    // WHAT IS pair?
    // -------------------------------------------------------------
    // A pair is a simple container defined in the <utility> header (included in bits/stdc++.h).
    // It stores exactly TWO values — which may be of different data types.
    // The values are referred to as .first and .second.

    // -------------------------------------------------------------
    // DECLARATION OF A pair
    // -------------------------------------------------------------
    // Syntax: pair<type1, type2> pair_name;
    // Below, we create a pair of string and int types:
    pair<string, int> p;

    // -------------------------------------------------------------
    // ASSIGNING VALUES TO A pair
    // -------------------------------------------------------------
    // We can assign values in 2 ways:
    // Method 1: Using make_pair() function:
    p = make_pair("hello", 1);

    // Method 2 (alternative): Assigning directly like this:
    // p.first = "hello";
    // p.second = 1;

    // -------------------------------------------------------------
    // ACCESSING VALUES IN A pair
    // -------------------------------------------------------------
    cout << p.first << endl;   // prints: hello
    cout << p.second << endl;  // prints: 1

    // -------------------------------------------------------------
    // DIFFERENT TYPES OF PAIRS
    // -------------------------------------------------------------
    // You can combine any two types:
    // 1. pair<int, int>           — e.g., (2, 5)
    // 2. pair<string, double>     — e.g., ("pi", 3.14)
    // 3. pair<char, bool>         — e.g., ('a', true)
    // 4. Nested pair: pair<int, pair<int, int>> — for 2D coordinates or triplets

    // Example of nested pair:
    pair<int, pair<int, int>> nested_pair = {1, {2, 3}};
    cout << nested_pair.first << " " << nested_pair.second.first << " " << nested_pair.second.second << endl;
    // Output: 1 2 3

    // -------------------------------------------------------------
    // COMMON USE CASES OF pair
    // -------------------------------------------------------------
    // ✅ Competitive programming — storing (value, index) or (cost, node)
    // ✅ Sorting custom objects — like vector<pair<int, int>>
    // ✅ Mapping values temporarily without using map
    // ✅ Representing 2D coordinates (x, y)
    // ✅ Storing key-value like data in lightweight form

    // -------------------------------------------------------------
    // OPERATIONS WITH pair
    // -------------------------------------------------------------
    // ✅ Comparison: Pairs are compared lexicographically by default
    // Example:
    pair<int, int> a = {1, 5};
    pair<int, int> b = {1, 9};
    cout << (a < b) << endl;  // Output: 1 (true) because 5 < 9

    // ✅ Swapping:
    swap(a, b);
    cout << a.first << " " << a.second << endl; // 1 9
    cout << b.first << " " << b.second << endl; // 1 5

    // ✅ Storing in a container like vector:
    vector<pair<int, int>> vp;
    vp.push_back({10, 20});
    vp.push_back(make_pair(30, 40));

    // Traversing vector of pairs
    for(auto it : vp){
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
