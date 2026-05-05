#include <stdio.h>

int main() {
    int choice, num, lim, i;

    while (1) {
        printf("\n===== MULTIPLICATION TABLE MENU =====\n");
        printf("1. Generate Table\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {

            printf("\nEnter a number: ");
            scanf("%d", &num);

            printf("Enter limit: ");
            scanf("%d", &lim);

            if (lim <= 0) {
                printf("Please enter a positive limit.\n");
                continue;
            }

            printf("\nMultiplication Table of %d:\n\n", num);

            for (i = 1; i <= lim; i++) {
                printf("%d x %d = %d\n", num, i, num * i);
            }

        } 
        else if (choice == 2) {
            printf("Exiting program... Goodbye!\n");
            break;
        } 
        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}