#include <stdio.h>
 int main() {
    char color;
    printf("Enter traffic light color (R/G/Y): ");
    scanf(" %c", &color);
    switch(color) {
        case 'R': case 'r': printf("STOP!\n"); break;
        case 'G': case 'g': printf("GO!\n"); break;
        case 'Y': case 'y': printf("WAIT!\n"); break;
        default: printf("Invalid color!\n");
    }
    return 0;
 }