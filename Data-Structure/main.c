#include <stdio.h>

int main() {
    float digit1, digit2;
    char operate;
    printf("1st Number: ");
    scanf("%f", &digit1);


    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operate);


    printf("2nd Number: ");
    scanf("%f", &digit2);




    if (operate == '+') {
        printf("Result: %.2f\n", digit1 + digit2);
    } else if (operate == '-') {
        printf("Result: %.2f\n", digit1 - digit2);
    } else if (operate == '*') {
        printf("Result: %.2f\n", digit1 * digit2);
    } else if (operate == '/') {
        if (digit2 == 0) {
            printf("Cannot divide by 0.\n");
        } else {
            printf("Result: %.2f\n", digit1 / digit2);
        }
    } else {
        printf("Invalid operator!\n");
    }
    return 0;
}
