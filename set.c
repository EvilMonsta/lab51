int SetSize(int size, int k) {
    if (k == 2) {
        printf("Enter array's size: ");
        scanf("%d", &size);
    }
    else if (k == 1) {
        size = 5;
    }
    return size;
}