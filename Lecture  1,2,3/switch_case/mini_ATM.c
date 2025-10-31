#include <stdio.h>
 int main() {
    int choice;
    float balance = 1000, amount;
    printf("1. Balance Check\n2. Withdraw\n3. Deposit\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Current Balance = %.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount <= balance) {
                balance -= amount;
                printf("Withdraw Successful. New Balance = %.2f\n", balance);
            } else {
                printf("Insufficient Balance!\n");
            }
            break;
        case 3:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposit Successful. New Balance = %.2f\n", balance);
            break;
        case 4:
            printf("Thank you! Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}