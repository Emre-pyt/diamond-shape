#include <stdio.h>
#include <stdlib.h>
int main() {
    int number;
    printf("Number:");
    scanf("%d", &number);
    for (int i = 1-number; i < number; i++) {
        for (int j = 1-number; j < number; j++) {
            if (abs(i) + abs(j) < number) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

   return 0;
}
