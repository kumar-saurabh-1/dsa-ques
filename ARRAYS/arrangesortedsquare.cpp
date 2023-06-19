#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]= {-4,-3,-1,0,2,10};
    int n = 6;

    int result[n];
    int i = 0;
    int j = n-1;
    int k = n-1;
    // Given two arrays and checking from each array and comparing with it
    while (i<= j and k >=0)
    {
        if (arr[i]*arr[i] < arr[j]*arr[j])
        {
            result[k] = arr[j]*arr[j];
            j--;
            k--;
        }
        else{
            result[k] = arr[i]*arr[i];
            i++;
            k--;
        }
        
    }
    // displaying the result 
    // for printing the result array
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
        /* code */
    }
    
    

    return 0;
}