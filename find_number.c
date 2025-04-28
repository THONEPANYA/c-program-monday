#include <stdio.h>

int main() {
    int nums[5];
    int n, i, num, choice, sum = 0, max, min;

    do {
        printf("Enter how many digits (3-5): ");
        scanf("%d", &n);
    } while (n < 3 || n > 5);

    printf("Enter a number with %d digits: ", n);
    scanf("%d", &num);

    for (i = n - 1; i >= 0; i--) {
        nums[i] = num % 10;
        num /= 10;
    }

    printf("\nDigits extracted:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", nums[i]);
    }

    // Output the choice
    printf("\nChoose an option:\n");
    printf("1. Calculate Sum\n");
    printf("2. Find Maximum\n");
    printf("3. Find Minimum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            sum = 0;
            // ຫາຄ່າ Sum of all numbers
            for (i = 0; i < n; i++) {
                sum += nums[i];
            }
            printf("Sum of all numbers is %d\n", sum);
            break;

        case 2:
            // ຫາຄ່າ Maximum number
            max = nums[0];
            for (i = 1; i < n; i++) {
                if (nums[i] > max) max = nums[i];
            }
            printf("Maximum number is %d\n", max);
            break;

        case 3:
            // ຫາຄ່າ Minimum number
            min = nums[0];
            for (i = 1; i < n; i++) {
                if (nums[i] < min) min = nums[i];
            }
            printf("Minimum number is %d\n", min);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
