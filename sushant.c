#include <stdio.h>

int main()
{
    int pin, choice;
    float balance = 5000.0;
    float amount;

    printf("$$$$$$$$ATM SIMULATION$$$$$$$$\n");

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != 1234)
    {
        printf("Incorrect PIN!\n");
        return 0;
    }

    printf("Login successful!\n");

    while (1)
    {
        printf(\n***********ATM MENU**********\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Your balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance = balance + amount;
                    printf("Money deposited successfully.\n");
                    printf("New balance = %.2f\n", balance);
                }
                else
                {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount.\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    balance = balance - amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining balance = %.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using the ATM!\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
