
#include <iostream>
#include <vector>   
using namespace std;

/*
 * Problem: Check if Array is Sorted and Rotated (LeetCode #1752)
 * Difficulty: Easy
 * Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
 * Approach: Count the number of times the order is violated
 * Time Complexity: O(n) where n is the length of the array
 * Space Complexity: O(1)
 * Example:
 * Input: nums = [3,4,5,1,2]
 * Output: true
 * Explanation: [1,2,3,4,5] is the original sorted array
 *             After rotating it once, it becomes [5,1,2,3,4].
 *            After rotating it twice, it becomes [4,5,1,2,3].
 *          After rotating it three times, it becomes [3,4,5,1,2].
 *        Therefore, the array is sorted and rotated.
 * Input: nums = [1,2,3]
 * Output: false
 * Explanation: [1,2,3] is the original sorted array.
 * After rotating it once, it becomes [3,1,2].
 * After rotating it twice, it becomes [2,3,1].
 * After rotating it three times, it becomes [1,2,3].   
 */

bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }

    return count <= 1;
}
int main() {
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << "Is Sorted and Rotated: " << check(nums) << endl; // Output: 1 (true)

    nums = {1, 2, 3};
    cout << "Is Sorted and Rotated: " << check(nums) << endl; // Output: 0 (false)

    nums = {2, 1, 3};
    cout << "Is Sorted and Rotated: " << check(nums) << endl; // Output: 0 (false)

    nums = {1, 1, 1};
    cout << "Is Sorted and Rotated: " << check(nums) << endl; // Output: 1 (true)

    return 0;
}