
#include <iostream>
#include <vector>   
using namespace std;

/*
 * Problem: Fibonacci Number (LeetCode #509)
 * Difficulty: Easy
 *
 * The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci 
 * sequence, such that each number is the sum of the two preceding ones, starting 
 * from 0 and 1. That is,
 *
 * F(0) = 0, F(1) = 1
 * F(n) = F(n - 1) + F(n - 2), for n > 1.
 *
 * Given n, calculate F(n).
 *
 * Approach: Dynamic Programming (Bottom-Up)
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */
int fib(int n) {
    if (n <= 1) {
        return n;
    }

    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];

}

int main() {
    int n = 10;
    cout << "Fibonacci of " << n << " is: " << fib(n) << endl; // Output: 55
    return 0;
}


