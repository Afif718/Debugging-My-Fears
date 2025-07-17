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
            cout << "Command not found!\n";
        }
    }

    return 0;
}

/*
Problem Statement

You are given a doubly linked list of unique string values. These strings refer to web addresses without any spaces. You will be given Q queries. In each query you will be given some commands. Type of commands are -

visit address - You need to go to that address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
next - You need to go to the next address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
prev - You need to go to the previous address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
One more thing, if the address isn't available make sure you don't move from your current position. You are at the head initially.

Note: You can use Singly/Doubly Linked List or STL List to solve this problem.

Input Format

First line will contain the values of the doubly linked list, and will terminate with the string "end".
Second line will contain Q.
Next Q lines will contain the commands. It is guranteed that you will get "visit address" command at first which will contain a valid address. It will not contain valid address everytime!
Constraints

1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
1 <= Q <= 1000;
1 <= |Address| <= 100; Here |Address| is the length of the string address.
Output Format

For each query output as asked.
Sample Input 0

facebook google phitron youtube twitter end
12
visit phitron
prev
prev
prev
prev
next
visit twitter
next
next
prev
visit django
prev
Sample Output 0

phitron
google
facebook
Not Available
Not Available
google
twitter
Not Available
Not Available
youtube
Not Available
phitron
Sample Input 1

a b c d e f g h i j k l m n o p q r s t u v w x y z end
7
visit s
next
visit zz
next
visit z
next
prev
Sample Output 1

s
t
Not Available
u
z
Not Available
y
*/