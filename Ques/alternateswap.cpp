#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    // Taking input from an array
    for(int i=0;i <n;i++){
        cin >> arr[i];
    }
    
    int start = 0;
    int end = 1;
    while (end <= n){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start = start+2;
        end = end+2;

    }
    
    
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";

    }
    cout << endl;

}