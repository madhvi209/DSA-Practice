#include<iostream>
#include<climits>

using namespace std;
    /*
     * Problem: Reverse Integer (LeetCode #7)
     * Difficulty: Easy
     *
     * Given a signed 32-bit integer x, return x with its digits reversed.
     * If reversing x causes the value to go outside the signed 32-bit integer
     * range [-231, 231 - 1], then return 0.
     *
     * we can reverse an integer by converting it to a string, reversing the string,
     * and converting it back to an integer. We also need to handle the sign of the integer and
     *  check for overflow.There are various appraoches to reverse an integer, like by 2 pointers,
     * by using modulus and division, etc. But the string approach is the most straightforward one.
     *
     * Approach: String Reversal
     * Time Complexity: O(n) where n is the number of digits in the integer
     * Space Complexity: O(n) for the string representation of the integer
     *
     * Approach: Two Pointers
     * Time Complexity: O(n) where n is the number of digits in the integer
     * Space Complexity: O(1) since we are reversing the integer in place
     *
     * Approach: Modulus and Division
     * Time Complexity: O(n) where n is the number of digits in the integer
     * Space Complexity: O(1) since we are reversing the integer in place
     */

    int reverse(int x){
    long long reversed = 0; // Use long long to handle overflow
    
    while (x != 0) {
        int digit = x % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number

        // Check for overflow
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        }
        x /= 10; // Remove the last digit
    }
    return reversed;
}

int main() {
    int x = 123;
    cout << "Reversed: " << reverse(x) << endl; // Output: 321
    x = -123;
    cout << "Reversed: " << reverse(x) << endl; // Output: -321
    x = 120;
    cout << "Reversed: " << reverse(x) << endl; // Output: 21
    x = 0;
    cout << "Reversed: " << reverse(x) << endl; // Output: 0

    return 0;
}