#include <stdio.h>
int main()
{
    int key;

    int ar[]= {10,20,30,40,22};
    printf("Array Items :\n");
    for (int j = 0; j<5; j++)
    {
        printf("%d ",ar[j]);
    }

    printf("Searching for ? ");
    scanf("%d",&key);

    for (int i = 0; i < 5; i++)
    {
        if (ar[i] == key)
        {
            printf("Data found at index %d", i);
            return 0;
        }

    }
    printf("Data Not Found");
}
