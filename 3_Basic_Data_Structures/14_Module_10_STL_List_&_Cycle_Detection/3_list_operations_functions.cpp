#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10, 20, 30, 40, 50, 60, 10, 20, 10};

    //erase function removes a value from a certain index
    //whereas remove function removes a value from a list 
    // lets say we mentioned 10 and 10 in the list available multiple times, it will remove all the 10 values
    //l.remove(10);

    //built in sort function doesnt work with list, it only works with array & vector
    l.sort(); //in ascending order
    //l.sort(greater<int>()); // it will sort in desending order

    //there is another function named unique
    // it removes all the duplicate values
    // but unique works only when the list is sorted
    l.unique();

    for(int val:l){
        cout << val << " "; 
    }
    return 0;
}