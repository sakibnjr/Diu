#include<stdio.h>
int main()
{

    int ar[]= {20,11,4,23,40};
    int i,j,temp;

    printf("Unsorted Array :");
    for(j=0; j<5; j++)
    {
        printf("%d ",ar[j]);
    }
    printf("\n");

    for(i=1; i<5; i++)
    {
        temp = ar[i];
        j = i-1;

        while(j>=0 && ar[j]>temp)
        {
            ar[j+1]=ar[j];
            j-=1;
        }
        ar[j+1]=temp;
    }

    printf("Sorted Array :");
    for(j=0; j<5; j++)
    {
        printf("%d ",ar[j]);
    }


}
