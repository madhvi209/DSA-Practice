# 📚 Data Structures & Algorithms (DSA) Practice

> A curated collection of DSA problem solutions in C++, focused on building strong problem-solving fundamentals through consistent practice.

---

## 🚀 Progress Tracking

1.Two Sum (https://leetcode.com/problems/two-sum/)
Topic: Array, Hash Table
Difficulty: 🟢 Easy
Solution: C++ (./Array/TwoSum.cpp)
Status: ✅ Solved

2.Palindrome Number (https://leetcode.com/problems/palindrome-number/)
Topic: Math, String
Difficulty: 🟢 Easy
Solution: C++ (./Array/Palindrome.cpp)
Status: ✅ Solved

3.Valid Palindrome (https://leetcode.com/problems/valid-palindrome/)
Topic: Two Pointers, String
Difficulty: 🟢 Easy
Solution: C++ (./Array/ValidPalindrome.cpp)
Status: ✅ Solved

4.Reverse Integer (https://leetcode.com/problems/reverse-integer/)
Topic: Math
Difficulty: 🟡 Medium
Solution: C++ (./Array/ReverseInt.cpp)
Status: ✅ Solved

5.Fibonacci Number (https://leetcode.com/problems/fibonacci-number/)
Topic: Math, Recursion, DP
Difficulty: 🟢 Easy
Solution: C++ (./Array/FibonacciNumbers.cpp)
Status: ✅ Solved

6.Check if Array is Sorted and Rotated (https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/)
Topic: Array
Difficulty: 🟢 Easy
Solution: C++ (./Array/CheckIsArrSortedAndRotated.cpp)
Status: ✅ Solved


## 📁 Repository Structure

```
DSA-PRACTICE/
├── Array/
│   ├── TwoSum.cpp
│   ├── Palindrome.cpp
│   ├── ValidPalindrome.cpp
│   ├── ReverseInt.cpp
│   ├── FibonacciNumbers.cpp
│   └── CheckIsArrSortedAndRotated.cpp
├── .gitignore
└── README.md
```

---

## 🧩 Problem Summaries

### 1. Two Sum
> **Difficulty:** 🟢 Easy &nbsp;|&nbsp; **Topic:** Array, Hash Table

Given an array of integers and a target, return indices of the two numbers that add up to the target.

- **Approach:** Hash Map for O(n) time complexity
- **Key Concept:** Trade space for time using an unordered_map

---

### 2. Palindrome Number
> **Difficulty:** 🟢 Easy &nbsp;|&nbsp; **Topic:** Math

Determine whether an integer is a palindrome without converting it to a string.

- **Approach:** Reverse the second half of the number and compare
- **Key Concept:** Handle negative numbers and multiples of 10 as edge cases

---

### 3. Valid Palindrome
> **Difficulty:** 🟢 Easy &nbsp;|&nbsp; **Topic:** Two Pointers, String

A phrase is a palindrome if, after converting all uppercase letters to lowercase and removing all non-alphanumeric characters, it reads the same forward and backward.

- **Approach:** Two-pointer technique from both ends
- **Key Concept:** Use `isalnum()` and `tolower()` for character filtering

---

### 4. Reverse Integer
> **Difficulty:** 🟡 Medium &nbsp;|&nbsp; **Topic:** Math

Given a signed 32-bit integer, reverse its digits. Return 0 if the result overflows.

- **Approach:** Extract digits using modulo and rebuild the reversed number
- **Key Concept:** Overflow check before pushing each digit using INT_MAX/INT_MIN bounds

---

### 5. Fibonacci Number
> **Difficulty:** 🟢 Easy &nbsp;|&nbsp; **Topic:** Math, Recursion, Dynamic Programming

The Fibonacci numbers form a sequence where each number is the sum of the two preceding ones.

- **Approach:** Iterative / Memoized DP for O(n) time, O(1) space
- **Key Concept:** Avoid exponential recursion by caching or using iteration

---

### 6. Check if Array is Sorted and Rotated
> **Difficulty:** 🟢 Easy &nbsp;|&nbsp; **Topic:** Array

Given an array, return true if it was originally sorted in non-decreasing order and then rotated some number of positions.

- **Approach:** Count the number of "drop" points (where arr[i] > arr[i+1])
- **Key Concept:** A valid sorted + rotated array has at most 1 such drop point

---

## 🛠️ How to Run

Make sure you have a C++ compiler installed (g++ recommended).

```bash
# Compile
g++ -o output Array/TwoSum.cpp

# Run
./output
```

---

## 📈 Topics Covered

| Topic | Problems Solved |
|-------|----------------|
| Array | 3 |
| Math | 3 |
| Two Pointers | 1 |
| Hash Table | 1 |
| Dynamic Programming | 1 |
| Recursion | 1 |

---

## 🎯 Goals

- [ ] Solve 200+ LeetCode problems
- [ ] Cover all major DSA topics
- [ ] Maintain daily practice streak
- [ ] Add time & space complexity notes to each solution

---

## 📌 Resources

- [LeetCode](https://leetcode.com/)
- [NeetCode Roadmap](https://neetcode.io/roadmap)
- [CP-Algorithms](https://cp-algorithms.com/)
- [GeeksForGeeks DSA](https://www.geeksforgeeks.org/data-structures/)
- [My GitHub Profile](https://github.com/madhvi209)
- [My LeetCode Profile](https://leetcode.com/u/madhavi209/)

---

*Created by **Madhavi Sharma** — Keep grinding! 💪*