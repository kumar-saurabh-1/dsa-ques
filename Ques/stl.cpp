#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    int count = 0;
    int n = vec.size();
    for(int i = 1;i<n;i++){
        if(vec[i-1]> vec[i]){
            count++ ;
        }
    }
    if(vec[n-1] >vec[0]){
        count++;
    }
    return count<=1;
}