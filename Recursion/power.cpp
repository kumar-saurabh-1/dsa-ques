#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    // base case 
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    // recursive call
    int answer = power(a,b/2);
    if(b%2 == 0){
        return answer*answer;
    }
    else{
        return a*answer*answer;
    }





}


int main(){
    int a,b;
    cin >> a >> b;

    int ans = power(a,b);
    cout << ans << endl;


    return 0;
}