#include <bits/stdc++.h>

class Solution {
public:
    void pushZerosToEnd(int arr[], int n) {
        // code here
        int j = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                j = i;
                break;
            }
        }
        if (j == -1) {
            return;
        }
        for (int i = j + 1; i < n; i++) {
            if(arr[i] != 0){
                int temp = arr[i];
                arr[j] = arr[i];
                arr[i] = temp;
                j++;
            }
            
        }
    }
};

int main() {
    int arr[] = {1,  0, 2, 0, 3, 4,0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution sol;
    sol.pushZerosToEnd(arr, n);

    // Print the array after pushing zeros to the end
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
