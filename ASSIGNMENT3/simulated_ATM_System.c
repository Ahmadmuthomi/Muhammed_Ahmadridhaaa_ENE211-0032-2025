#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double balance = 1000;
int login()
{
    char const correctPin[] = "4567" ;
    int const max_attempts= 3;
    int attempts =0;
    char userPin[10];

    while(attempts < max_attempts){
        printf("Enter your PIN>>> ");
        scanf("%s",&userPin);

        if (strcmp(userPin,correctPin)==0){
            return 1;
        }else{
            printf("Wrong PIN!! Access Denied!!\n");
            attempts ++;
            printf("%i attempts remain.\n\n", max_attempts - attempts);
        }
    }
    return 0;
}


void check_balance()
{
    printf("Your current balance is: %.2f\n", balance);
}

void deposit(double amount)
{
    if (amount <= 0){
        printf("Invalid amount!");
        return;
    }
    balance += amount;
    printf("Deposited %.2f. New balance: %.2f\n", amount, balance);
}
void withdraw(double amount)
{
    if (amount <= 0) {
        printf("Invalid amount.\n");
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= amount;
        printf("Withdrew %.2f. New balance: %.2f\n", amount, balance);
    }
}

int main()
{
    int choice;
    double amount;
    double balance = 1000;

    if (login()==1){
        printf("Login successful! Welcome.\n");
        do {
            printf("\t\tMENU\n\t1. Balance Inquiry\n\t2. Deposit\n\t3. Withdraw\n\t4. Exit");
            printf("\nTo choose a task from the menu enter the corresponding number.>>> "),
            scanf("%d",&choice);

            switch (choice) {
                case 1:
                    check_balance();
                    break;
                case 2:
                    printf("Enter the amount to deposit>>> ");
                    scanf("%lf", &amount);
                    deposit(amount);
                    break;
                case 3:
                    printf("Enter the amount to withdraw>>> ");
                    scanf("%lf", &amount);
                    withdraw(amount);
                    break;
                case 4:
                    printf("Thank you. Goodbye!\n");
                    break;
                default:
                    printf("Invalid choice. Try again.\n");
            }
        }while (choice != 4);

    } else {
        printf("Too many failed attempts. Exiting.\n");
    }
    return 0;
}

