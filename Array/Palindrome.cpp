#include <iostream>
#include <climits>

using namespace std;
/*
 * Problem: Palindrome Number (LeetCode #9)
 * Difficulty: Easy
 *
 * Given an integer x, return true if x is a palindrome, and false otherwise.
 *
 * Approach: Reverse the Integer and Compare
 * Time Complexity: O(n) where n is the number of digits in the integer
 * Space Complexity: O(1)
 */
bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return false;
    }

    // Single digit numbers are palindromes
    if (x < 10) {
        return true;
    }

    // Reverse the integer and compare with the original
    long long reversed = 0;
    int original = x;

    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return reversed == original;
}

int main() {
    int x = 121;
    cout << "Is Palindrome: " << isPalindrome(x) << endl; // Output: 1 (true)

    x = -121;
    cout << "Is Palindrome: " << isPalindrome(x) << endl; // Output: 0 (false)

    x = 10;
    cout << "Is Palindrome: " << isPalindrome(x) << endl; // Output: 0 (false)

    return 0;
}