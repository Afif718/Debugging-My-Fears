#include<bits/stdc++.h>
using namespace std;

/*
Cricketer
{
	jersey_no;
	country;
}
*/

class Cricketer{
    public:
    int jersey_no;
    string country;
};

int main(){
    
    //dynamic objects
    Cricketer* dhoni = new Cricketer();
    Cricketer* kohli = new Cricketer();
    
    dhoni->jersey_no = 45;
    dhoni->country = "India";

    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country;


    return 0;
}

/*
Question: Create a dynamic object named dhoni of the following class. Don’t use a constructor here, that means you need to fill the data by yourself.
Cricketer
{
	jersey_no;
	country;
}
Then make another dynamic object named kohli and copy the data of the dhoni object to kohli and after that delete the dhoni object. Then print the jersey_no and country of kohli object.
Note: At first try to do this, kohli=dhoni and see if it gives the correct output. If not, then think deeply why it didn’t work and try to copy the data manually like kohli->jersey_no=dhoni->jersey_no; 

*/