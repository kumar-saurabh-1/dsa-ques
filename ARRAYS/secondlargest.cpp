#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {3,4,5,57,8,90};
    int n = 6;
    int largest = arr[0];
    int slargest = -1;

	for(int i=1;i<n;i++){ 
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest and arr[i] > slargest){
            slargest = arr[i];
        }
    }
   
    cout << slargest << endl;   

    return 0;
}