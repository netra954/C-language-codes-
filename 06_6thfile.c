#include <stdio.h>

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use the conditional operator to determine if the number is even or odd
    const char* result = (number % 2 == 0) ? "Even" : "Odd";

    // Print the result
    printf("The number is: %s\n", result);

    return 0;
}
