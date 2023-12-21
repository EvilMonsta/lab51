#include <stdio.h>
#include <malloc.h>

int ArrayInput(int* a, int n, int k) {
    if (k == 2) {
        printf("Enter your array:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }
        printf("Etalon array:\n1 2 3 4 5\n");
    }
    return n;
}