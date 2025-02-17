#include <stdio.h>
#include <math.h>

int main()
{
    float base = 18, height = 6, hypotenuse, area, angle;

    area = 0.5 * base * height;

    hypotenuse = sqrt((base * base) + (height * height));

    angle = atan(height / base) * (180.0 / M_PI);


    printf("\nArea of the Triangle is %.2f \n", area);
    printf("Hypotenuse of the Triangle is %.2f \n", hypotenuse);
    printf("Angle of the marked position is %.2f degrees \n\n", angle);

    return 0;
}
