#include <stdio.h>

int main() {
    int n;
    int yeniSayi = 0;
    int carpan = 1;
    int sonBasamak = -1;
    int suanki;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 0) {
        suanki = n % 10;
        
        if (suanki != sonBasamak) {
            yeniSayi = yeniSayi + (suanki * carpan);
            carpan = carpan * 10;
            sonBasamak = suanki;
        }
        
        n = n / 10;
    }

    printf("Output: %d\n", yeniSayi);

    return 0;
}
