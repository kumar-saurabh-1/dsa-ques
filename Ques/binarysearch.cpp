#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
     
    int mid = (start+end)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
    
}

int main(){
    int array[5] = {10,20,30,40,50};
    int index = binarysearch(array,5,50);

    cout << "index of elemnent is " << index<< endl;


}