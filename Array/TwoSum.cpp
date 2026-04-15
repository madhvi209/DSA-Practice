#include <iostream>
#include <vector>
#include <unordered_map>

/**
 * Problem: Two Sum (LeetCode #1)
 * Difficulty: Easy
 * 
 * Description:
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * 
 * Approach: One-pass Hash Table
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the complement exists in the map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            
            // Otherwise, store current number and its index
            numMap[nums[i]] = i;
        }
        
        return {}; // No solution found (though the problem guarantees one)
    }
};

// --- Test Driver ---
int main() {
    Solution sol;
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    std::vector<int> result = sol.twoSum(nums, target);
    
    std::cout << "Test Case 1: [2, 7, 11, 15], Target: 9" << std::endl;
    if (result.size() == 2) {
        std::cout << "Result: [" << result[0] << ", " << result[1] << "]" << std::endl;
    } else {
        std::cout << "No solution found" << std::endl;
    }
    
    return 0;
}
