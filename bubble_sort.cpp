#include <stdio.h>
int main()
{

    int ar[] = {11, 3, 4, 9, 19, 21};
    int i, j, size = 6;

    printf("Before Sorting : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    printf("After Sorting : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }
}