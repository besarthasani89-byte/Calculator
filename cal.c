#include <stdio.h>

int main() {
    char operator;
    double num1,num2,result;
    char choice;
do {
    printf("Choose a operator ['+', '-', '*', '/']: ");
    scanf(" %c", &operator);

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter a second number: ");
    scanf("%lf", &num2);

    switch (operator){
        case '+':result = num1+num2;break;
        case '-':result = num1-num2;break;
        case '*':result = num1*num2;break;
        case '/':
        if (num2 == 0){
        printf("ERROR: Division by zero\n");
        goto askAgain;
        }
        result = num1/num2;break;
        default:
        printf("Invalid operator\n");
        goto askAgain;
    }
    if (result == (int)result)
        printf("Result: %d\n", (int)result);
    else
        printf("Result: %.2f\n", result);

        askAgain:
        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);

    }
    while (choice == 'y'|| choice == 'Y');

    printf("Goodbye!\n");
    return 0;
}
