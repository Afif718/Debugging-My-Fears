#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_of_times;
    cin >> num_of_times;

    for(int i=0; i<num_of_times; i++){
        string str, x;
        cin >> str >> x;

        int pos = str.find(x);

        while(pos != string::npos){
            str.replace(pos, x.size(), "#");
            pos = str.find(x, pos+1);
        }

        cout << str <<endl;
    }
    
    return 0;
}

/*
Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-07/challenges/replace-word

Replace Word
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

Input Format

First line will contain T, the number of test cases.
Next T lines will contain a line with S and X.
Constraints

1 <= T <= 1000
1 <= |S|, |X| <= 1000
|X| <= |S|
Output Format

For each test cases output the modified string S.
Sample Input 0

2
rahimisagoodguy good
canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
Sample Output 0

rahimisa#guy
can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer

*/