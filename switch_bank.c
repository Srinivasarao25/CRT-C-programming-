#include <stdio.h>

void checkBalance(int balance);
int deposit(int balance);
int withdraw(int balance);
int main() {
    int balance = 1000;
    int choice;
    do {
        printf("\nBanking System Menu\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);
    return 0;
}
void checkBalance(int balance) {
    printf("Your current balance is: $%d\n", balance);
}
int deposit(int balance) {
    int amount;
    printf("Enter amount to deposit: $");
    scanf("%d", &amount);
    balance += amount;
    printf("Deposit of $%d successful.\n", amount);
    printf("Your updated balance is: $%d\n", balance);
    return balance;
}
int withdraw(int balance) {
    int amount;
    printf("Enter amount to withdraw: $");
    scanf("%d", &amount);
    if (amount > balance) {
        printf("Insufficient balance. Withdrawal failed.\n");
    } else {
        balance -= amount;
        printf("Withdrawal of $%d successful.\n", amount);
        printf("Your updated balance is: $%d\n", balance);
    }
    return balance;
}