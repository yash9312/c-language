#include <stdio.h>

void add(float a, float b)
{
    printf("Result: %.2f\n", a + b);
}

void subtract(float a, float b)
{
    printf("Result: %.2f\n", a - b);
}

void multiply(float a, float b)
{
    printf("Result: %.2f\n", a * b);
}

void divide(float a, float b)
{
    if (b != 0)
    {
        printf("Result: %.2f\n", a / b);
    }
    else
    {
        printf("Error: Division by zero!\n");
    }
}

void modulus(int a, int b)
{
    if (b != 0)
    {
        printf("Result: %d\n", a % b);
    }
    else
    {
        printf("Error: Division by zero!\n");
    }
}

int main()
{
    float num1, num2;
    char operator;
    char choice;

    do
    {
        printf("\nMenu:\n");
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        printf("Choose an operator (+, -, *, /, %) : ");
        scanf(" %c", &operator);

        switch (operator)
        {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        case '%':
            modulus((int)num1, (int)num2);
            break;
        default:
            printf("Invalid operator! Please try again.\n");
            break;
        }

        printf("\nDo you want to perform another operation? (Enter 'q' to quit or any other key to continue): ");
        scanf(" %c", &choice);
    } while (choice != 'q');

    printf("Exiting the program.\n");
    return 0;
}