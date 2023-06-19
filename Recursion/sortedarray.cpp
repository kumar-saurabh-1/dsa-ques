#include<bits/stdc++.h>
using namespace std;

bool isSorted( int arr[] , int n){

    if( n == 0 || n == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return isSorted(arr+1,n-1);


}

int main(){

    int arr[5] = {1,2,7,4,5};
    int size = 5;
    bool ans = isSorted(arr,size);
    cout << ans << endl;

    return 0;
}