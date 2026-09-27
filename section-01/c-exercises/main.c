#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void FizzBuzz(int n) {
    if (n % 15 == 0) {
        printf("FizzBuzz");
    } else if (n % 3 == 0) {
        printf("Fizz");
    } else if (n % 5 == 0) {
        printf("Buzz");
    }
}

int main(void) {
    /* ===== Exercise 1 ===== */
    printf("--- Exercise 1 ---\n");
    printf("Hello, World!\n");

    int x = 3;
    int y = 7;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap:  x = %d, y = %d\n", x, y);

    /* ===== Exercise 2 ===== */
    int *arr = malloc(20 * sizeof(int));
    if (arr == NULL) {
        printf("malloc failed\n");
        return 1;
    }

       for (int i = 0; i < 20; i++) {
        *(arr + i) = i + 1;
    }

    printf("\n--- Exercise 2: FizzBuzz on array ---\n");
    for (int i = 0; i < 20; i++) {
        printf("%d: ", *(arr + i));
        FizzBuzz(*(arr + i));
        printf("\n");
    }

    printf("\n--- Exercise 2: FizzBuzz loop 1-30 ---\n");
    for (int n = 1; n <= 30; n++) {
        printf("%d: ", n);
        FizzBuzz(n);
        printf("\n");
    }

    free(arr);
    return 0;
}