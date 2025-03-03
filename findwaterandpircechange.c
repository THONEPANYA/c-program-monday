#include <stdio.h>

int bottle;
float price;
int amount;
float total_cost;
float change;

int b5, b2, b1, b05;

int main() {

    printf("----------------- FewFan-Shop ---------------------\n");

    printf("Enter number of water bottles: ");
    scanf("%d", &bottle);

    printf("Enter the price of a bottle of water: ");
    scanf("%f", &price);

    total_cost = bottle * price;
    printf("Total cost: %.2f USD\n", total_cost);

    printf("Enter the amount of money you have: ");
    scanf("%d", &amount);

    printf("-------------------------------------------------\n");


    // ຄຳນວນເງິນທີ່ຕ້ອງທອນ
    change = amount - total_cost;
    printf("Change: %.2f USD\n", change);

    int remaining = (int)change; // ຄ່າເງິນທີ່ຄຳນວນໃບ

    b5 = remaining / 5000;
    remaining %= 5000;

    b2 = remaining / 2000;
    remaining %= 2000;

    b1 = remaining / 1000;
    remaining %= 1000;

    b05 = remaining / 500;
    remaining %= 500;

    printf("The 5000 banknote = %d\n", b5);
    printf("The 2000 banknote = %d\n", b2);
    printf("The 1000 banknote = %d\n", b1);
    printf("The 500 banknote = %d\n", b05);

    printf("-------------------------------------------------\n");
    printf("Thank You!\n\n");

    return 0;
}
