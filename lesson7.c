#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// ==============================================================

/*
string with array
string with pointer
fgets() puts() scanf()
fgets(name, sizeof(name), stdin);
puts(name);
gets();
passing strings to functions
strlen() - calculates the length of a string
strcpy() - copies a string to another
strcmp() - compares two strings
strcat() - concatenates two strings
*/

// ==============================================================
// int main ()
// {
//     char mystr[100] = "Hello";
//     char name[200];
//     scanf("%s", &name);
//     printf("name: %s", name);
// }
// ==============================================================
// int main()
// {
//     char *name = NULL;
//     name = (char *)malloc(30 * sizeof(char));
//     scanf("%s", name);
//     printf("name: %s", name);
// }
// ==============================================================
// int main()
// {
//     char *name = NULL;
//     name = (char *)malloc(30 * sizeof(char));
//     fgets(name, 30, stdin);
//     printf("name: %s", name);
// }
// ==============================================================
// int main()
// {
//     char *name = NULL;
//     name = (char *)malloc(30 * sizeof(char));
//     gets(name);
//     puts(name);
// }
// ==============================================================
// char *myFunction(char myStr[])
// {
//     char *result = NULL;
//     result = (char *)malloc(30 * sizeof(char));
//     strcpy(result, "Hello, ");
//     strcat(result, myStr);
//     return result;
// }

// int main()
// {
//     puts(myFunction("danial"));
// }
// ==============================================================
// int main()
// {
//     char myone[30] = "ahmad";
//     char mytwo[30] = "ahmad";
//     if (strcmp(myone, mytwo) == 0)
//     {
//         printf("Equal");
//     }
//     else
//     {
//         printf("Not Equal");
//     }
// }
// ==============================================================
// int main()
// {
//     char password[] = "Rezasadri";
//     printf("Length: %d\n", strlen(password));
//     printf("length: %d", sizeof(password)/sizeof(password[0]));
// }
// ==============================================================
// int main()
// {
//     int myArr[] = {1, 2, 3, 4, 5};
//     printf("length: %d\n", sizeof(myArr)/sizeof(myArr[0]));

//     char password[] = "1234567891";
//     printf("Length: %d\n", strlen(password));
//     printf("length: %d", sizeof(password)/sizeof(password[0]));
// }
// ==============================================================
