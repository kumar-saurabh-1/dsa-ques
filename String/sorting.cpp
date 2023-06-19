#include<bits/stdc++.h>
using namespace std;


string countSort(string s){
    vector<int> freq(26,0);
    // storing frequency of characters at index 0 represents a and no
        // it have appeared how many times
    for (int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 'a';
        freq[index] = freq[index]+1;
   // storing the freq of every character in a sring
    }
    int j = 0;
    for(int i = 0;i<26;i++){
        while(freq[i] --){
            s[j++] = i + 'a';
        }
    }
    return s;
    
}





int main(){
/*
    string str;
    cin >> str;
    
    cout<< countSort(str)<<endl;

*/
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    cout << s << endl;

    return 0;
}