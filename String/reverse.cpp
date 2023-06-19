#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    int i=0;
    int j=s.size()-1;
    // reversing the string array
    // 2 pointer approach
    
    while (i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
        
    }
    return s;
    
}




int main(){
    string s;
    cin >> s;

    cout << reverse(s)<< endl;
    return 0;
}