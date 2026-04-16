#include <iostream>
using namespace std;
/*
 * Problem: Rotate Array (LeetCode #189)
 * Difficulty: Easy
 *
 * Given an array, rotate the array to the right by k steps, where k is non-negative.
 *
 * Note:
 * Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
 * Could you do it in-place with O(1) extra space?
 *
 * Approach: Reverse Parts of the Array
 * Time Complexity: O(n) where n is the number of elements in the array
 * Space Complexity: O(1)
 */

void reverse(int A[], int start, int end) {
    while (start < end) {
        swap(A[start], A[end]);
        start++;
        end--;
    }
}

void rotate(int A[], int n, int k) {
    k %= n;  // Handle cases where k is larger than n
    reverse(A, 0, n - 1);     // Reverse the entire array
    reverse(A, 0, k - 1);     // Reverse the first k elements
    reverse(A, k, n - 1);     // Reverse the remaining elements
}   

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(A) / sizeof(A[0]);
    int k = 3;
    
    rotate(A, n, k);
    
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}