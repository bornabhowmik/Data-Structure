#include<stdio.h>
int main()
{
    int ar[]={4,8,2,9,6};
    int i, value, hole;   
    for(i=1; i<5; i++)
    {
        value=ar[i];
        hole=i;
        while(hole>0 && ar[hole-1]>value)
        {
            ar[hole]=ar[hole-1];
            hole--;
        }
        ar[hole]=value;
    }
    printf("sorted array:\n");
    for(i=0; i<5; i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}