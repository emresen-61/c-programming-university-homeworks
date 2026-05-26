#include <stdio.h>

int main() {
    int i, j, sayi, adet = 0, asalMi;

    printf("enter 10 integer: ");

    for (i = 1; i <= 10; i++) {
        scanf("%d", &sayi);

        if (sayi <= 1) {
            asalMi = 0;
        } else {
            asalMi = 1;
            for (j = 2; j <= sayi / 2; j++) {
                if (sayi % j == 0) {
                    asalMi = 0;
                    break;
                }
            }
        }

        if (asalMi == 1) {
            printf("%d ", sayi);
            adet++;
        }
    }

    printf("\nCount: %d\n", adet);

    return 0;
}
