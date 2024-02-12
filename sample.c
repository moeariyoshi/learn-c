#include <stdio.h>
// standard input/output library
// ex. printf, scanf...

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    printf("Age: %d\n", age); // %d - format specifiers
    printf("Height: %f\n", height);
    printf("Grade: %c\n", grade);

    int number;

    printf("Enter a number: ");
    // & gets the memory address of the variable 
    // to store input
    scanf("%d", &number); 

    printf("You entered: %d\n", number);

    // Standard if-else
    if (number > 0) {
        printf("Positive\n");
    } else if (number < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    // for loop
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    return 0;
}
