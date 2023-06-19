#include<bits/stdc++.h>
using namespace std;


int main(){

    int a[] = {1,1,2};
    set<int> s;
        for (int i = 0; i < 3; i++) {
            s.insert(a[i]);
        }
        
        cout << endl;
        
        cout <<  s.size() << endl;
    

    return 0;
}