#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a < b) {
        for (int i = a; i <= b; i++) {
            if (i != a) {
                printf("- ");
            }
            printf("%d %d ", i, a + b - i);
        }
    } else {
        for (int i = a; i >= b; i--) {
            if (i != a) {
                printf("- ");
            }
            printf("%d %d ", i, a + b - i);
        }
    }

    return 0;
}