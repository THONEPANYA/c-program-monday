#include <stdio.h>

int main() {
    int day, month, year; // ວັນທີ່ເດືອນປິ
    int lot1, lot2, lot3; // ໝາຍເລກທີ່ຕ້ອງການຊື້
    int m1, m2, m3;       // ຈຳນວນເງິນທີຊື້
    int total;            // ຈຳນວນເງິນທັງໝົດ

    // ຮັບຂໍ້ມູນວັນທີ່ເດືອນປິ
    printf("Enter Current Date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    // ຮັບຂໍ້ມູນເລກຫວຍທີ່ຊື້
    printf("Enter lottery 1 and money (Number Money): ");
    scanf("%d %d", &lot1, &m1);

    printf("Enter lottery 2 and money (Number Money): ");
    scanf("%d %d", &lot2, &m2);

    printf("Enter lottery 3 and money (Number Money): ");
    scanf("%d %d", &lot3, &m3);

    // ຄຳນວນຍອດເງິນທັງໝົດ
    total = m1 + m2 + m3;

    // Output
    printf("\nDate: %02d-%02d-%d\n", day, month, year);
    printf("----------------------------------\n");
    printf("Lot       Quantity\n");
    printf("----------------------------------\n");
    printf("[%03d]    %d\n", lot1, m1);
    printf("[%03d]    %d\n", lot2, m2);
    printf("[%03d]    %d\n", lot3, m3);
    printf("----------------------------------\n");
    printf("Total:    %d\n", total);
    printf("\n***** Good Luck *****\n");

    return 0;
}
