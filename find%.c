#include <stdio.h>

int main() {
    float price, interest, total;
    int months;
    float installment;

    printf("Enter the price of product: ");
    scanf("%f", &price);

    printf("Enter the quantity of installment: ");
    scanf("%d", &months);

    if (price >= 500000) {
        interest = 0.0139; // 1.39% = 1.39 ÷ 100 = 0.0139
    } else {
        interest = 0.0170; // 1.70% = 1.70 ÷ 100 = 0.0170
    }

    total = price + (price * interest * months);

    installment = total / months;

    printf("The amount of installment: %.3f kips/month\n", installment);

    return 0;
}
