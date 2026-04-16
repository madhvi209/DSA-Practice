#include <iostream>
using namespace std;
/*
 * Problem: Check if Array is Sorted and Rotated (LeetCode #1752)
 * Difficulty: Easy
 *
 * Given an array, check if it is a sorted and rotated version of a sorted array.
 *
 * Note:
 * Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
 * Could you do it in-place with O(1) extra space?
 * 
 * Brute Force Approach:    
 * logic: Check if the array is sorted in ascending order and then check if it is rotated 
 * by comparing the first and last elements.
 * Time complexity of brute force approach is O(n) and space complexity is O(1).
 * 
 * optimal approach:
 * logic: Count the number of positions where arr[i] > arr[i+1]. If this count is 0, 
 * the array is sorted. If the count is 1 and the last element is less than or equal to the 
 * first element, the array is sorted and rotated.
 *
 * Best/optimized Approach: Reverse Parts of the Array
 * Time Complexity: O(n) where n is the number of elements in the array
 * Space Complexity: O(1)
 * why this is best Approach: This approach is efficient because it only requires a single 
 * pass through the array to count the number of positions where arr[i] > arr[i+1], 
 * and it does not require any additional space for sorting or storing intermediate results.
 */

bool check(int A[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > A[(i + 1) % n]) {
            count++;
        }
    }
    return count <= 1;
}

int main() {
    int A[] = {3, 4, 5, 1, 2};
    int n = sizeof(A) / sizeof(A[0]);
    
    if (check(A, n)) {
        cout << "The array is sorted and rotated." << endl;
    } else {
        cout << "The array is not sorted and rotated." << endl;
    }
    
    return 0;
}
