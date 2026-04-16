#include <iostream>
using namespace std;

/*
 * Problem: Single Number (LeetCode #136)
 * Difficulty: Easy
 *
 * Given a non-empty array of integers, every element appears twice except for one. Find that single one.
 *
 * Note: 
 * There are multiple way to solve this problem, like using a hash map to count occurrences,
 * but the XOR operation provides a more efficient solution.
 * As T.c for using a hash map is O(n) and S.c is O(n), 
 * while using XOR has T.c of O(n) and S.c of O(1).
 * 
 * Approach: XOR Operation
 * Time Complexity: O(n) where n is the number of digits in the integer
 * Space Complexity: O(1)
 */

int singleNumber(int A[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= A[i];
    }
    return result;
}

int main() {
    int A[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "The single number is: " << singleNumber(A, n) << endl;
    return 0;
}
