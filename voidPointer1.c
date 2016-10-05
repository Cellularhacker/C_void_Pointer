/*
Cellularhacker
GNU GENERAL PUBLIC LICENSE Version 3
voidPointer1.c

It'll be better with refering MSDN page
:(https://msdn.microsoft.com/en-us/library/aa273674(v=vs.60).aspx)
*/
#include <stdio.h>

//void vobject;       // Error, You cannot decalre void type with standalone.
void *pv;             // You can declare void type with pointer.
int  *pint; int i;
void main() {         // main has no return value
pv = &i;              // Put the address of i into value of pv;void pointer
pint = (int *)pv;     // fill the address value of pint;int pointer with address value of pv;void pointer 
                      // Casting is optional in C, but it is required in C++
}