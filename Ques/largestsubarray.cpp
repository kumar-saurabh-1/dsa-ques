#include<iostream>
using namespace std;
// O(n2) time complexity
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        int sum = arr[i];
        for(int j=i+1;j<n;j++){  // j = i krne se do baar same element add hojata
            sum += arr[j];
            if(sum > maxsum){
                maxsum = sum;
            }
        }
    }
    cout << maxsum<< endl;
}