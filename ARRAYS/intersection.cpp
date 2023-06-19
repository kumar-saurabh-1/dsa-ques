#include<iostream>
using namespace std;

int main(){

    int a1[6] = {1,2,3,4,5,6};
    int a2[5] = {3,4,5,6,7};
    int r[5];
    int i=0;
    int j=0;

    while(i < 6 or j<5){
        if(a1[i] == a2[j]){
            r[i] = a1[i];
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout << r[5]<< endl;



    return 0;
}