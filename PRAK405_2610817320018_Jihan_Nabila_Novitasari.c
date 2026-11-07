#include <stdio.h>

int main() {
    int n, kelipatan;
    int total = 0, jumlah;

    scanf("%d %d", &n, &kelipatan);

    for (int i = 1; i <= n; i++) {
        jumlah = 0;

        for (int j = i; j >= 1; j--) {
            if (j != i) {
                printf(" + ");
            }

            printf("(%d * %d)", j, kelipatan);
            jumlah = jumlah + (j * kelipatan);
        }

        printf(" = %d\n", jumlah);
        total = total + jumlah;
    }

    printf("%d\n", total);

    return 0;
}