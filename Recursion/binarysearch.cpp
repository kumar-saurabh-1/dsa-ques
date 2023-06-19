#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int low,int high,int key){
    // base case
    if(low > high){
        return false;
    }
    int mid = (low+high)/2;
    if(arr[mid] == key){
        return 1;
    }
    // search for right half
    if(arr[mid] < key){
        return binarySearch(arr,mid+1,high,key);
    }// search for left half
    else{
        return binarySearch(arr,low,mid-1,key);

    }



}

int main(){

    int arr[6] = {1,2,3,4,5,6};
    bool ans = binarySearch(arr,0,5,1);
    cout << ans << endl;
    return 0;
}