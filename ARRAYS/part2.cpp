#include<bit/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(int nums[], int n) {
    int i = 0;
    int curr = 0;
    int sum = 0;
    for (int j = 0; j < n; j++) {
        if (nums[j] == 1) {
            i++;
            curr = i;
            sum = max(sum, curr);
        } else {
            i = 0;
            curr = 0;
        }
    }
    return sum;
}

int main() {
    int arr[] = {1,0,1,1,0,1};
    cout << findMaxConsecutiveOnes(arr , 6) << endl;

    return 0;
}
