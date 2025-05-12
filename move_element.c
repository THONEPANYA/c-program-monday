#include <stdio.h>

int number[5] = {10, 20, 30, 40, 50};
char *days[3] = {"Monday", "Tuesday", "Wednesday"};

int main(int argc, char const *argv[])
{
    int size = 5, pos = 2, num = 25;

    // Move Element
    for (int i = size - 1; i > pos; i--)
    {
        number[i] = number[i - 1];
    }
    number[pos] = num; 
    size++;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", number[i]);
    }

    // Delete Element
    for (int i = pos; i < size - 1; i++)
    {
        number[i] = number[i + 1];
    }
    size--;

    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");

    /*printf("%d\n", number[3]);   // แสดงค่า index 3 คือ 40
    printf("%s\n", days[0]);       // แสดงค่า "Monday"
    printf("Size of Array = %d\n", size); // แสดงขนาดของ array number
    printf("%lu\n", sizeof(days) / sizeof(days[0])); // แสดงขนาดของ array days*/

    return 0;
}
