#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int a = -1,b = 1000;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i] && a==-1){
                if(i-1<0){
                    a = 0;
                }
                else{
                    a = i-1;
                }
            }
            else if(nums[i+1]>=nums[i]){
                a = -1;
            }
        }
        if(a==-1){
            for(int i=0;i<nums.size();i++){
                if(i==nums.size()-1){
                    cout<<nums[i-1]<<" ";
                }
                else if(i==nums.size()-2){
                    cout<<nums[i+1]<<" ";
                }
                else{
                    cout<<nums[i]<<" ";
                }
            }
        }
        else if(a==0){
            for(int i=nums.size()-1;i>=0;i--){
                cout<<nums[i]<<" ";
            }
        }
        else{
            int c;
            for(int i=a;i<nums.size();i++){
                if(nums[i]>nums[a]){
                    b = min(b,nums[i]);
                    if(b==nums[i]){
                        c = i;
                    }
                }
            }
            int d = nums[c];
            nums[c] = nums[a];
            nums[a] = d;
            sort(nums.begin()+a,nums.end());
            for(int i=0;i<nums.size();i++){
                cout<<nums[i]<<" ";
            }
        }
        }
};

    int main(){
        vector<int>Myka = {1,2,3};
        next_permutation(Myka);
    }