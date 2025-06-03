#include<bits/stdc++.h>
using namespace std;

class Numbers{
    public:
    int num1;
    int num2;
    string name1;
    string name2;

    Numbers(int num1, int num2, string name1, string name2){
        this->num1 = num1;
        this->num2 = num2;
        this->name1 = name1;
        this->name2 = name2;
    }

    int sum (){
        return num1 + num2;
    }

    void names(){
        cout << name1 << " " << name2;
    }
};

int main(){
    
    Numbers add(2,3, "Afif", "Rashed");

    cout << add.sum() << endl;
    add.names();
    return 0;
}