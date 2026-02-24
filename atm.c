#include <stdio.h>

int main() {
    int choice;
    int balance = 5000;   
    int amount;

    printf("===== ATM =====\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance += amount;   
            printf("New balance: %d\n", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            balance -= amount;  
            printf("New balance: %d\n", balance);
            break;

        case 3:
            printf("Check balance: %d\n", balance);
            break;

        case 4:
            printf("Exit successful.\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}