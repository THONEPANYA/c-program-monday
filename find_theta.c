#include <stdio.h>
#include <math.h>

float a, b, theta, c;

int main()
{
    /* code */
    printf("Enter the Opposite side: ");
    scanf("%f", &a);
    printf("Enter the Adjacent side: ");
    scanf("%f", &b);

    theta = atan(a/b);
    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("The Theta = %f rad\n", theta);
    printf("The Hypotenuse Side (c) = %f cm\n", c);

    return 0;
}
