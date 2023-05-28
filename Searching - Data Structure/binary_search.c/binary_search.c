#include<stdio.h>

int binarySearch(int A[], int n, int data) {
    int beg = 0;
    int end = n - 1;
    int mid;

    while (beg <= end) {
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
    int A[] = {1, 3, 5, 7, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int data = 5;

    int result = binarySearch(A, n, data);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}