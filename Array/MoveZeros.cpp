#include <iostream>
#include <vector>

/**     
 * Move all zeros in the array to the end while maintaining the relative order of non-zero elements.
 * This function modifies the input vector in-place.
 * 
 * @param nums A reference to a vector of integers that may contain zeros.
 * 
 * Brute force approach: Iterate through the array and for each zero found, shift all 
 * subsequent elements to the left and place the zero at the end. This approach has a time 
 * complexity of O(n^2) in the worst case.
 * 
 * optimized approach: Use a two-pointer technique where one pointer iterates through the 
 * array
 * and the other pointer keeps track of the position to insert the next non-zero element. 
 * This approach has a time complexity of O(n) and a space complexity of O(1) since it 
 * modifies the array in-place without using extra space for another array.
 * 
 * Example:
 * Input: [0, 1, 0, 3, 12]  
 * Output: [1, 3, 12, 0, 0]
 * Explanation: The non-zero elements are moved to the front while maintaining their order,
 * and the zeros are moved to the end of the array.
 * 
 * Constraints:
 * - The input array may contain a mix of positive, negative, and zero values.
 * - The function should handle edge cases such as an array with all zeros or no zeros at all.
 * - The function should be efficient in terms of time and space complexity.
 * 
 */

void moveZeroes(std::vector<int>& nums) {
    int insertPos = 0; // Position to insert the next non-zero element

    // Move non-zero elements to the front
    for (int num : nums) {
        if (num != 0) {
            nums[insertPos++] = num;
        }
    }

    // Fill the remaining positions with zeros
    while (insertPos < nums.size()) {
        nums[insertPos++] = 0;
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    std::cout << "After moving zeros: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}