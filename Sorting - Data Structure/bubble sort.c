#include<stdio.h>
int main()
{
    int ar[]={8,5,3,9,6};
    int i, j, size=5;
    for(i=0; i<size-1; i++ )
    {
        for(j=0; j<size-1-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("After sorting:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}