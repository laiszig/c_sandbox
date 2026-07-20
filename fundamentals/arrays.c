#include <stdio.h>

int main(void) {
    /* defines an array of 10 integers */
    int numbers[10];

    /* populate the array */
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    /* print the 7th number from the array, which has an index of 6 */
    printf("The 7th number in the array is %d", numbers[6]);


    /* Multidimensional Arrays */
    int foo[1][2][3];

    int a[3][4] = {
        {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
        {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
        {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
    };

    /* accessing two-dimensional array elements */
    int val = a[2][3];

}
