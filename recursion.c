#include <stdio.h>

int factorial(int n) {
    // Base case: Stops the recursion
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: Calls itself with a smaller input
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    // Initial call to the recursive function
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
