/*
Cellularhacker
GNU GENERAL PUBLIC LICENSE Version 3
voidPointer2.c
*/
#include <stdio.h>


int main(void) {
    int a = 10;
    short b = 5;
    char c = 'C';
    double d = 3.1415926535;
    void *vptr;

    vptr = &a;  // put the address of a;int into vtpr;void pointer
    printf("*vptr = %d\n", *(int *)vptr);

    vptr = &b;  // put the address of b;short into vtpr;void pointer
    printf("*ptr = %d\n", *(short *)vptr);

    vptr = &c;  // put the address of c;char into vtpr;void pointer
    printf("*ptr = %c\n", *(char *)vptr);

    vptr = &d;  // put the address of d;double into vtpr;void pointer
    printf("*ptr = %f\n", *(double *)vptr);

    return 0;
}