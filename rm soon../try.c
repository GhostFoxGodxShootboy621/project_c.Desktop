#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    double money;
    bool check;
    int category;
start:
    printf("Enter your money: ");
    scanf("%lf", &money);
    double me = 2300 - money;
    category =
        (money <= 1400)  * 1 +
        (money > 1400 && money <= 5400) * 2 +
        (money > 5400) * 3;
    switch (category) {
        case 1:
            printf("Chal hat gareeb, mai terse Rs %.2f zyada hoon.\n", me);
            break;
        case 2:
            printf("I mean it's alright.\n");
            break;
        case 3:
            printf("Online money is not included, right?(1 for true||0 for false): ");
            scanf("%d", &check);
            switch (check) {
                case true:
                    printf("Chal hat jhoote!\n");
                    break;
                case false:
                    printf("shut up b***");
                    goto start;
            }
            break;
        default:
            printf("Invalid input.\n");
    }
    return 0;
}
