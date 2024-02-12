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

    return 0;
}
