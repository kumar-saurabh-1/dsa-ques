#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int i,int j){

    // base case 
    if(i > j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;

    // recursive call
    reverse(s,i,j);



}

int main(){

    string name;
    cin >> name;
    reverse(name ,0, name.length()-1);
    cout << "Reversed letters are " << name << endl;

    return 0;
}
    
