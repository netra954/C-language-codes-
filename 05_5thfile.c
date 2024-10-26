#include <stdio.h>

int main() {
    int num1, num2, min;

    // Input: Get two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using the ternary operator to find the minimum number
    min = (num1 < num2) ? num1 : num2;

    // Output the result
    printf("The minimum number is: %d\n", min);

    return 0;
}
