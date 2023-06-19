#include<iostream>
using namespace std;

int maxelement(int arr[],int size){
    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}
int minelement(int arr[],int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}

int main(){
    int arr[] = {1,2,3,4,5};

    int buy = minelement(arr,5);
    int sell = maxelement(arr,5);

    int profit = sell - buy;
    cout << profit<< endl;

}
