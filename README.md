# recursion

## Aim:-
To study and implement recursion.

## Theory of Recursion in C++

Recursion is a fundamental programming technique where a function calls itself to solve smaller instances of a problem until it reaches a base case. In C++, recursion can be a powerful tool for solving problems that exhibit repetitive substructure, such as tree traversals, factorial calculations, and the Fibonacci sequence.

### What is Recursion?

Recursion occurs when a function solves a problem by breaking it down into smaller, more manageable instances of the same problem. Each recursive call brings the function closer to a base case, which is a condition that stops the recursion.

### Key Components of Recursion

1. **Base Case**: The condition under which the recursion stops. Without a base case, recursion would continue indefinitely, leading to a stack overflow.
2. **Recursive Case**: The part of the function where the function calls itself with modified arguments to approach the base case.

### Implementing Recursion in C++

In C++, a recursive function is defined like any other function but includes a call to itself within its body. Here's a simple example using the factorial function:

```cpp
#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) { // Base case
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number = 5;
    std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl;
    return 0;
}
```

## Algorithm for Recursive Sum Function

This algorithm computes the sum of the first `n` natural numbers using recursion. The function calls itself with a smaller value of `n` until it reaches the base case.

### Step 1: Input

- Read an integer value `n` from the user.

### Step 2: Base Case

- If `n <= 1`, return `n` as the sum. This handles the smallest cases where the sum is either `0` or `1` directly.

### Step 3: Recursive Case

- If `n > 1`, return the value of `n` plus the sum of all integers up to `n-1`:
  
  \[
  \text{sum}(n) = n + \text{sum}(n - 1)
  \]

  This step breaks the problem down into smaller instances until the base case is reached.

### Step 4: Output

- Print the computed sum.

---

### **Algorithm for Factorial Calculation Using Recursion**

---

#### **Step 1**: **Input**
- Read an integer `a` from the user.

#### **Step 2**: **Base Case Handling**
- If the value of `n` (the number for which we are calculating the factorial) is less than or equal to 1:
  - Return 1 (this is the base case, since factorial of 0 and 1 is defined as 1).

#### **Step 3**: **Recursive Case**
- If `n > 1`:
  - Call the recursive function with `n-1`.
  - Multiply the result of `fact(n-1)` with `n`.

#### **Step 4**: **Return**
- Return the result of `n * fact(n-1)` to the caller.

#### **Step 5**: **Output**
- Print the result (factorial of the input number).

---


###  Algorithm for print reverse. 
---
1. **Start**
2. **Input**: Read integer `n` from the user.
3. **Function Definition**: `reverse(n)`
   - **If** `n < 10`:
     - Print `n` (Base Case)
     - Return
   - **Else**:
     - Print `n % 10` (the last digit of `n`)
     - Call `reverse(n / 10)` to process the remaining digits
4. **Call** `reverse(n)` in the `main` function.
5. **Output**: The digits of `n` printed in reverse order.
6. **End**

---

### Algorithm for Reversing a String Using Recursion in C++

---

#### **Step 1**: Input
- Read a string `str` from the user. The maximum string length is 50 characters.

#### **Step 2**: Find the Length of the String
- Define a function `length(char *str)` that calculates the length of the string `str`:
  - Initialize a variable `l` to 0.
  - Iterate through the string using a `while` loop until the null character `'\0'` is found.
  - Increment `l` with each iteration.
  - Return `l`, which is the length of the string.

#### **Step 3**: Recursive Function to Reverse the String
- Define the function `reverse(char *str, int i, int n)` that takes three parameters:
  - `str`: the string to reverse.
  - `i`: the current index.
  - `n`: the length of the string.
  
- **Base Case**: If `i == n`, return from the function. This means the recursion has reached the end of the string.
- **Recursive Case**: 
  - Call `reverse(str, i + 1, n)` to move to the next character.
  - After the recursive call, print `str[i]`. This prints the characters in reverse order.

#### **Step 4**: Main Function
- In the `main()` function:
  1. Read the input string `str` from the user.
  2. Call the `length(str)` function to calculate the length of the string and store it in `n`.
  3. Call the `reverse(str, 0, n)` function to recursively print the string in reverse order.

---

## conclusion :-

by this experiment we learned to use recursion in c++.


