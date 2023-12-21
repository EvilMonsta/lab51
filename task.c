#include <stdio.h>
#include <malloc.h>
#include "input.h"
#include "check.h"
#include "set.h"
#include "new.h"
#include "out.h"

int main()
{ 
    int n = 5, t = 0, k;
    k = ArrayCheck();
    if (k == 0) return 0;
    n = SetSize(n, k);
    int* a;
    a = (int*)malloc(n * sizeof(int));
    n = ArrayInput(a, n, k);
    NewArray(a, n);
    ArrayOutput(a, n, k);
    return 0;
}// 1 2 3 4 5/