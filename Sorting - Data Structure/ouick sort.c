#include<stdio.h>
int main()
{
   int s, l, h, i;
   scanf("%d", &s);

   int arr[s];

   for(i=0; i<s; i++)
   {
      scanf("%d", &arr[i]);
   }

   quicksort(arr,0,s-1);

   for(i=0; i<s; i++)
   {
    printf("%d ", arr[i]);
   }

   return 0;
}

void quicksort(int a[], int low, int high)
{
  if(low<high)
  {
    int pivot=a[high];
    int t=low-1;
    for(int i=0; i<high; i++)
    {
      if(a[i]<pivot)
      {
        t++;
        swap(&a[i], &a[t]);
      }

    }
    t++;
    swap(&a[high], &a[t]);
    quicksort(a, low, t-1);
    quicksort(a, t+1, high);
  }
}
void swap(int *a, int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

