#include <iostream>
using namespace std;

/*
 * Problem: Valid Palindrome (LeetCode #125)
 * Difficulty: Easy
 *
 * Given a string s, determine if it is a palindrome, considering only alphanumeric 
 * characters and ignoring cases.
 *
 * Approach: Two Pointers
 * Time Complexity: O(n) where n is the length of the string
 * Space Complexity: O(1)
 */

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Move left pointer to the next alphanumeric character
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // Move right pointer to the previous alphanumeric character
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // Compare characters ignoring case
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }

    return true;

}       

int main() {
    string s =
        "A man, a plan, a canal: Panama";
    cout << "Is Palindrome: " << isPalindrome(s) << endl; // Output : 1 (true)  
    s = "race a car";
    cout << "Is Palindrome: " << isPalindrome(s) << endl; // Output : 0 (false)  
    s = " ";
    cout << "Is Palindrome: " << isPalindrome(s) << endl; // Output : 1 (true)  
    return 0;
}   


