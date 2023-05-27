#include <stdio.h>

int main() {
    int i, j, min, position, size;

    scanf("%d", &size);
    int a[size];

    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size - 1; i++) {
        min = a[i];
        position = i;

        for (j = i + 1; j < size; j++) {
            if (a[j] < min) {
                min = a[j];
                position = j;
            }
        }

        if (position != i) {
            int temp = a[i];
            a[i] = a[position];
            a[position] = temp;
        }
    }

    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}