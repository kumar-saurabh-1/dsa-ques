#include<bits/stdc++.h>
using namespace std;




int main(){

    string s;
    cin >> s;
    if(isalnum(s[2])){
        cout << "Alphanumeric character"<< endl;
    }
    else{
        cout << "Not an alphanumeric character" << endl;
    }
    // converting into small case letter 
    if(tolower(s[0]) == tolower(s[5])){
        cout << "lower function working properly"<< endl;
    }


    return 0;
}