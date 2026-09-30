#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0)
        return false;

    int original = x;
    int reverse = 0;

    while (x != 0) {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x / 10;
    }

    return original == reverse;
}

int main() {
    // Test Case 1: Typical case
    int num1 = 121;
    printf("Test Case 1: %d -> %s\n",
           num1, isPalindrome(num1) ? "true" : "false");

    // Test Case 2: Edge case
    int num2 = -121;
    printf("Test Case 2: %d -> %s\n",
           num2, isPalindrome(num2) ? "true" : "false");

    return 0;
}