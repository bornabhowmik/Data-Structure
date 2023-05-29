#include<stdio.h>

int binarySearch(int A[], int n, int data) {
    int beg, mid, end;
    beg = 0;
    end = n - 1; 

    while (beg <= end) 
    {
    mid = (beg + end) / 2;
        
        if (data == A[mid])
        return mid;

        else if (data > A[mid])
        beg = mid + 1;
        
        else
        end = mid - 1;
    }
    
    return -1;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int data = 3;
    
    int index = binarySearch(A, n, data);
    
    if (index != -1)
    printf("Element found at index %d\n", index);

    else
    printf("Element not found\n");
    
    return 0;
}