#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if ((a ^ b) == 0) {
        printf("Both numbers are Equal\n");
    } else {
        printf("Both numbers are Not Equal\n");
    }

    return 0;
}
