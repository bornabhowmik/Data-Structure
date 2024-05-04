#include<stdio.h>
int main()
{
    int num[]={7,9,3,5,4};
    int value, pos=-1,i;
    printf("Enter the value you want to search:");
    scanf("%d", &value);
    for(i=0; i<5; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("item is not found");
    }
    else
    {
        printf("the item is found of position %d",pos);
    }

    return 0;
}