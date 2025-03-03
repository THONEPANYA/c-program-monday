#include <stdio.h>

int main() {
    char name[20], surname[20];
    int age;
    float BMI, mass, tall_cm, tall;

    // Input
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your surname: ");
    scanf("%s", surname);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight (Kg): ");
    scanf("%f", &mass);
    printf("Enter your height (cm): ");
    scanf("%f", &tall_cm);

    tall = tall_cm / 100.0;

    BMI = mass / (tall * tall);

    // Output
    printf("\nName: %s, Surname: %s\n", name, surname);
    printf("Age: %d Years old\n", age);
    printf("Your BMI = %.2f\n", BMI);

    return 0;
}
