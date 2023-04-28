#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);

    int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    // linear search
    int x;
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        if(ar[i]==x)count++;
    }

    if(count>0)
        {
          printf("Data found\n");
        }
        else
        {
            printf("Data not found\n");
        }
    
    return 0;
}
