int ArrayCheck() {
    int k = 0;
    printf("Do you want to use your own array?\n");
    printf("1 - yes\n0 - no\n");
    printf("Your answer: ");
    scanf("%d", &k);
    if (k == 1) {
        return 2;
    }
    else if (k == 0) {
        return 1;
    }
    else {
        printf("ERROR");
        return 0;
    }

}