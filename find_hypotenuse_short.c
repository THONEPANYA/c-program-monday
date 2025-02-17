#include <stdio.h>
#include <math.h>

int main()
{
    // ປ້ອນຄ່າທີ່ເປັນພື້ນແລະລວງສູງ
    float base = 18, height = 6, hypotenuse, area, angle;

    // ຄູນແລະຫານຄ່າ
    area = 0.5 * base * height;

    // ຫາຄ່າຂອງມຸມ
    hypotenuse = sqrt((base * base) + (height * height));

    // ເອົາມາຄູນຫາຄ່າຂອງມັນ
    angle = atan(height / base) * (180.0 / M_PI);

    // Output
    printf("\nArea of the Triangle is %.2f \n", area);
    printf("Hypotenuse of the Triangle is %.2f \n", hypotenuse);
    printf("Angle of the marked position is %.2f degrees \n\n", angle);

    return 0;
}
