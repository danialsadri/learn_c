#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// ==============================================================

/*
Pointers 
Assigning addresses to Pointers 
get value of thing Pointed by pointers 
check site
Arrays and Pointers --> Example
Pointers and functions --> swap Example
call by reference --> Not copy 
c dynamic memory allocation
malloc --> stdlib
calloc -- > 0
ptr =  (CaseType*) malloc(size);
ptr =  (CateType*) calloc(n, size);
c free()
realloc
ptr = realloc(ptr, x);
c Program to find largest Number Using Dynamic Memory Allocation
* ==> 2*3
* ==> Pointer Decliration
* ==> contain
* ==> address
*/

// ==============================================================
// int main()
// {
//     int a = 10;
//     a = 20;
//     int* b = NULL;
//     b = &a,
// }
// ==============================================================
// int main()
// {
//     int a = 10;
//     a = 20;
//     int* ptr = NULL;
//     ptr = &a;
//     // printf("a= %d, ptr= %p", a, ptr);
//     printf("a= %d, ptr= %d", a, *ptr);
// }
// ==============================================================
// int main()
// {
//     int a = 20;
//     int* ptr = NULL;
//     ptr = &a;
//     *ptr = 5;
//     printf("a= %d, ptr= %d", a, *ptr);
// }
// ==============================================================
// int main()
// {
//     int MyArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int* ptr = NULL;
//     ptr = MyArray;

//     printf("%d", MyArray[0]);
//     printf("%d", *(ptr+0));
// }   
// ==============================================================
// int swap(int* a, int* b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int a= 10, b= 20;
//     printf("a= %d, b= %d\n", a, b);
//     swap(&a, &b);
//     printf("a= %d, b= %d", a, b);
// }
// ==============================================================
// int main()
// {
//     int *ptr = NULL;
//     // ptr = (int*)malloc(5*sizeof(int));
//     ptr = (int*)calloc(5, sizeof(int));

//     *(ptr+1) = 3;
//     printf("%d", *(ptr+1));
//     free(ptr);
// }
// ==============================================================
// int main()
// {
//     int *ptr = NULL;
//     ptr = (int*)calloc(5, sizeof(int));

//     *(ptr+1) = 3;
//     printf("%d", *(ptr+1));

//     ptr = realloc(ptr, 10*sizeof(int));

//     free(ptr);
// }
// ==============================================================
// int main()
// {
//     int *ptr = NULL;
//     int n;
//     printf("Pleaser Enter Number Of Numbers:");
//     scanf("%d", &n);
//     ptr = (int*)calloc(n, sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter Number: ");
//         scanf("%d", (ptr+i));
//     }
//     int max = *(ptr+0);
//     for (int i = 0; i < n; i++)
//     {
//         if (max < *(ptr+i))
//         {
//             max = *(ptr+i);
//         }
//     }
//     printf("MAX= %d", max);
//     free(ptr);
// }
// ==============================================================
