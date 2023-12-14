//Write the C statement to declare and initialize the pointer variable for the given structure and display
//the array content using pointer.
#include <stdio.h>
int main() {
 int a[] = {120, 502, 118, 188, 106, 447};
 int length = sizeof(a) / sizeof(a[0]);
 int *ptr = a;
 printf("Array a\n");
 printf("Index\tValue\n");
 for (int i = 0; i < length; i++) {
 printf("%d\t%d\n", i, *(ptr + i));
 }
 printf("&a[0]: %p\n", &a[0]);
 printf("ptr: %p\n", ptr);
 return 0;
}