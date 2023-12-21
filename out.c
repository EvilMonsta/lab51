void ArrayOutput(int* a, int n, int k) {
    printf("New array is\n");
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", a[i]);
    }
    if (k == 1) {
        printf("\nExpected array:\n1 1 2 4 3 9 4 16 5 25");
    }
}