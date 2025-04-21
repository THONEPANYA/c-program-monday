#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num, target = 5, count = 0;

int main(int argc, char const *argv[])
{
    printf("Weclome to the guest number Game\n\n");
    srand(time(NULL));
    target = rand() % 10 + 1;
    while (count<3)
    {
        printf("Enter the nubmer: ");
        scanf("%d", &num);
        if (num == target)
        {
            printf("You guessed the number!\n");
            break;
        }
        else if (num > target)
        {
            printf("The number is too high\n");
        }
        else
        {
            printf("The number is too low\n");
        }
    }
    
    return 0;
}
