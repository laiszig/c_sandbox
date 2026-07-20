#include <stdio.h>

int main(void) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    int n = 0;
    while (n < 10) {
        n++;
    }

    while (1) {
        n++;
        if (n == 10) {
            break;
        }
    }

    while (n < 10) {
        n++;

        /* check that n is odd */
        if (n % 2 == 1) {
            /* go back to the start of the while block */
            continue;
        }

        /* we reach this code only if n is even */
        printf("The number %d is even.\n", n);
    }
}
