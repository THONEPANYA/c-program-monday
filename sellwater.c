#include <stdio.h>

void inputMoney(int *money1, int *money2) {
    printf("Input money 1 (20000): ");
    scanf("%d", money1);
    printf("Input money 2 (10000): ");
    scanf("%d", money2);
}

int selectDrink() {
    int choice;
    int price = 0;
    printf("Select drink:\n");
    printf("1. Water 5000\n");
    printf("2. Pepsi 10000\n");
    printf("3. Beer 12000\n");
    printf("0. Finish selection\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: price = 5000; break;
        case 2: price = 10000; break;
        case 3: price = 12000; break;
        case 0: price = 0; break;
        default:
            printf("Invalid choice.\n");
            price = -1;
    }
    return price;
}

void calculateChange(int totalMoney, int totalPrice) {
    int change = totalMoney - totalPrice;
    if (change < 0) {
        printf("Insufficient funds.\n");
        return;
    }

    printf("Total price: %d\n", totalPrice);
    printf("Total money: %d\n", totalMoney);
    printf("Change: %d\n", change);

    int count5000 = change / 5000;
    change %= 5000;

    int count2000 = change / 2000;
    change %= 2000;

    int count1000 = change / 1000;
    change %= 1000;

    int count500 = change / 500;
    change %= 500;

    printf("Number of 5000 bills: %d\n", count5000);
    printf("Number of 2000 bills: %d\n", count2000);
    printf("Number of 1000 bills: %d\n", count1000);
    printf("Number of 500 bills: %d\n", count500);

    if (change > 0) {
        printf("Remaining amount cannot be given in 500, 1000, 2000, or 5000 bills: %d\n", change);
    }
}

int main() {
    int money1, money2;
    inputMoney(&money1, &money2);
    int totalMoney = money1 + money2;

    int totalPrice = 0;
    int price;

    while (1) {
        price = selectDrink();
        if (price == 0) {
            break;
        } else if (price == -1) {
            continue;
        } else {
            int newTotal = totalPrice + price;
            if (newTotal > totalMoney) {
                printf("You have exceeded the money you have! Cannot add this drink.\n");
                continue;
            }
            totalPrice = newTotal;
            printf("Added %d to total price.\n", price);
            printf("Total price so far: %d\n", totalPrice);
            int balance = totalMoney - totalPrice;
            printf("Remaining balance: %d\n", balance);

            printf("Do you want to select another drink? (1=Yes, 0=No): ");
            int more;
            scanf("%d", &more);
            if (more == 0) {
                break;
            }
        }
    }

    if (totalPrice == 0) {
        printf("No drinks selected. Program ended.\n");
        return 0;
    }

    calculateChange(totalMoney, totalPrice);

    return 0;
}
