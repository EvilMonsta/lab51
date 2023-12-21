#include <malloc.h>
#include <stdio.h>
void NewArray(int* a, int n) {
    int j = 0;
    a = (int*)realloc(a,2*n * sizeof(int));
    for (int i = n - 1; i >= 0; i--) {
        a[2*n - 1 - j] = a[i] * a[i];
        a[2*n - 2 - j] = a[i];
        j += 2;
    }
}
