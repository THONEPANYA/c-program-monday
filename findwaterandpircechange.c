#include <stdio.h>

int bottle;
float price;
int amout;
float total_cost;
float change;

int main(int argc, char const *argv[])
{

    printf("-----------------FewFan-Shop---------------------\n");

    // ຮັບຄ່າຂອງຂວດນ້ຳ
    printf("Enter Water bottle: ");
    scanf("%d", &bottle);

    // ຮັບລາຄາຂອດນ້ຳ
    printf("Enter the price of a bottle of water: ");
    scanf("%f", &price);

    // ຄຳນວນລາຄາລວມ
    total_cost = bottle * price;
    printf("Total cost: %.2f USD\n", total_cost);

    // ປ້ອນຈຳນວນເງິນທີ່ທ່ານມີ
    printf("Enter the amount of money you have: ");
    scanf("%d", &amout);

    printf("-------------------------------------------------\n");

    // ລົບເງິນທີ່ທ່ານມີຈາກລາຄາລວມ
    change = amout - total_cost;
    printf("Change: %.2f\n", change);

    // ກວດສອບວ່າມີເງິນພໍບໍ່
    if (amout < total_cost)
    {
        printf("You don't have enough money\n");
    }
    else
    {
        printf("You have enough money\n");
    }

    return 0;
}
