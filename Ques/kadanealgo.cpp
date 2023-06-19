#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxsum = INT_MIN;
    int curr = 0;
    for(int i = 0; i < n;i++){
        curr = curr + arr[i];
        if (curr > maxsum){
            maxsum = curr;
        }
        if(curr < 0){
            curr = 0;
        }
    }
    cout << maxsum << endl;
}