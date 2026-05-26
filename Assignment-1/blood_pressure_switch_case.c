#include <stdio.h>

int main() {
    int deger;

    printf("Enter your systolic blood pressure: ");
    scanf("%d", &deger);

    switch (deger) {
        case 0 ... 119:
            printf("NORMAL\n");
            break;
        case 120 ... 129:
            printf("ELEVATED\n");
            break;
        case 130 ... 139:
            printf("STAGE 1 HYPERTENSION\n");
            break;
        case 140 ... 180:
            printf("STAGE 2 HYPERTENSION\n");
            break;
        default:
            printf("HYPERTENSIVE CRISIS\n");
            break;
    }

    return 0;
}
