#include <stdio.h>

int main(void) {
    const char * name = "John Smith";

    char name[] = "John Smith";
    /* is the same as */
    char name[11] = "John Smith";

    const char * name = "John Smith";
    int age = 27;

    /* prints out 'John Smith is 27 years old.' */
    printf("%s is %d years old.\n", name, age);

    const char * name = "Nikhil";
    printf("%d\n",strlen(name));

    const char * name = "John";

    if (strncmp(name, "John", 4) == 0) {
        printf("Hello, John!\n");
    } else {
        printf("You are not John. Go away.\n");
    }

    /* concatenation */
    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);
}
