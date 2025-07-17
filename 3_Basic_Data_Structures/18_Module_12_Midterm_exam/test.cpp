#include<bits/stdc++.h>
using namespace std;

int main(){

    // Create a doubly linked list (std::list) to store websites visited.
    // std::list is ideal here because it allows efficient insertion and deletion anywhere in the list
    // and supports bidirectional iteration.
    list<string> lsites;

    string site;
    // Take input until the user types "end".
    // This loop stores all input strings into the list.
    while(cin >> site){
        if(site == "end"){
            break;
        }

        // Append the site to the end of the list
        lsites.push_back(site);
    }

    // Get the number of queries (commands to process like visit/next/prev)
    int queries;
    cin >> queries;

    // Declare an iterator pointing to the beginning of the list.
    // This will represent the "current" page the user is on.
    auto current = lsites.begin();  // std::list<string>::iterator type

    while(queries--){
        string command;
        cin >> command;

        if(command == "visit"){
            // "visit <site>" sets the current pointer to the site if it exists in the list.
            string target;
            cin >> target;

            // std::find is a linear search algorithm from <algorithm> header
            // It returns an iterator pointing to the found element or lsites.end() if not found.
            auto it = find(lsites.begin(), lsites.end(), target);

            if(it != lsites.end()){
                // If the site is found, set the current pointer to it.
                current = it;
                cout << *current << endl;  // Dereferencing the iterator to print the site name
            } else{
                cout << "Not Available\n";
            }

        } else if(command == "next"){
            // "next" moves the current pointer to the next site in the list, if possible.

            auto next_it = current;  // Create a copy of the current iterator
            next_it++;               // Move to the next element

            if(next_it != lsites.end()){
                // If not at the end, update current and print the new current site
                cout << *next_it << endl;
                current = next_it;
            } else{
                // Can't move forward beyond the last element
                cout << "Not Available\n";
            }

        } else if(command == "prev"){
            // "prev" moves the current pointer to the previous site, if possible.

            if(current != lsites.begin()){
                // Can't move backward if already at the beginning
                current--;  // Move back
                cout << *current << endl;
            } else{
                cout << "Not Available\n";
            }

        } else{
            // For any unrecognized command
            cout << "Not Available\n";
        }
    }

    return 0;
}
