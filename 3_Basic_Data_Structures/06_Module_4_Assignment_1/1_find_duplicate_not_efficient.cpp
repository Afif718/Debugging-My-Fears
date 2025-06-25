#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;

    vector<int> v(size);

    for(int i=0; i<size; i++){
        cin >> v[i];
    }

    bool isDuplicateExist = false;

    //check if duplicate exist
    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
        if(v[i] == v[j]){
            isDuplicateExist = true;
            break;
        }
      }
    }

    if(isDuplicateExist){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }
    return 0;
}