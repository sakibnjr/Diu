#include <stdio.h>
int main()
{
    int ar[] = {10, 20, 30, 50, 80};
    int item = 360;

    int left, right, middle;

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (ar[middle] == item)
        {
            printf("Data is found at index %d", middle);
            return 0;
        }
        else if (ar[middle] < item)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("Item not found!");
}