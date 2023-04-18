#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            printf("Number Matched\n");
            break;
        }
        else
        {
            printf("Number Not Found\n");
        }
        
    }
    

}