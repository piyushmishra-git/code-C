#include <stdio.h>
 int main() {
    int choice;
    float inr;
    printf("1. INR to USD\n2. INR to EUR\n3. INR to YEN\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    switch(choice) {
        case 1: printf("USD = %.2f\n", inr*0.012); break;
        case 2: printf("EUR = %.2f\n", inr*0.011); break;
        case 3: printf("YEN = %.2f\n", inr*1.73); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
 }