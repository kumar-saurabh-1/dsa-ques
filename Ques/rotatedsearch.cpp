#include<iostream>
using namespace std;


int binarysearch(int arr[],int size,int target){
    int start = 0;
    int end = size-1;

    

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == target){
            return mid;
        }// for left hand sorted part
        if(arr[start]<=arr[mid]){
            if(target>=arr[start] and target<arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        }
        // for right hand part
        else{
            if(target>arr[mid] and target<=arr[end]){
                start = mid+1; 
            }
            else{
                end = mid-1;
            }
        }
        
    }
    return -1;
}


int main(){

    int array[2] = {3,1};
    int element = binarysearch(array,2,1);
    cout << "element is " << element << endl;

}
