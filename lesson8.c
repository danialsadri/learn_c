#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// ===================================================================================

/*
why structs in c?
in c programming, a struct (or structure)
is a collection of variable
(can be of different types) under a single name.

struct structName
{
    dataType member1;
    dataType member2;
    ...
};
when a struct type is declared,
ni storage or memory is allocated.
To alocate mwmory of a given structure
type and work with it,
we need to create variables.

struct Person person1, person2, p[20];
Another way of creating a struct variable is: After Decliration

There are two types of operators used for accessing members of a structure.
    .  Member operator
    -> Structure pointer operator

Keyword typedef

Nested Structures

struct complex
{
    int imag;
    float real;
};

struct number
{
    struct complex comp;
    int integers;
} num1, num2;

Pointer to struct
personPtr->age is equivalent to (*personPtr).age

Dynamic Memory Allocation
ptr = (struct person*) malloc(n * sizeof(struct person));

Passing structs to funcions
Return struct from a function
*/

// ===================================================================================
// struct Student
// {
//     int id;
//     char name[50];
// };

// int main()
// {
//     struct Student person1;
//     person1.id = 42154214;
//     strcpy(person1.name, "Ahmad");
//     printf("Person1 ID: %d person1 Name: %s", person1.id,  person1.name);
// }
// ===================================================================================
// struct Student
// {
//     int id;
//     char name[50];
// };

// int main()
// {
//     struct Student person[10];
//     person[0].id = 42154214;
//     strcpy(person[0].name, "Ahmad");
//     printf("Person1 ID: %d person1 Name: %s", person[0].id, person[0].name);
// }
// ===================================================================================
// struct Student
// {
//     int id;
//     char name[50];
// };

// int main()
// {
//     struct Student person[10];
//     int number;
//     char temp[50];
//     printf("Please Enter Number Of Students: ");
//     scanf("%d", &number);

//     for (int i = 0; i < number; i++)
//     {
//         printf("Please Enter Id and Name: ");
//         scanf("%d %s", &person[i].id, temp);
//         strcpy(person[i].name, temp);
//     }

//     for (int i = 0; i < number; i++)
//     {
//         printf("\nStudent %d = Name: %s ID: %d\n", i , person[i].name, person[i].id);
//     }
// }
// ===================================================================================
// struct Student
// {
//     int id;
//     char name[50];
// } person[10];

// int main()
// {
//     int number;
//     char temp[50];
//     printf("Please Enter Number Of Students: ");
//     scanf("%d", &number);

//     for (int i = 0; i < number; i++)
//     {
//         printf("Please Enter Id and Name: ");
//         scanf("%d %s", &person[i].id, temp);
//         strcpy(person[i].name, temp);
//     }

//     for (int i = 0; i < number; i++)
//     {
//         printf("\nStudent %d = Name: %s ID: %d\n", i , person[i].name, person[i].id);
//     }
// }
// ===================================================================================
// typedef struct Student
// {
//     int id;
//     char name[50];
// };

// int main()
// {
//     Student person[10];
//     int number;
//     char temp[50];
//     printf("Please Enter Number Of Students: ");
//     scanf("%d", &number);

//     for (int i = 0; i < number; i++)
//     {
//         printf("Please Enter Id and Name: ");
//         scanf("%d %s", &person[i].id, temp);
//         strcpy(person[i].name, temp);
//     }

//     for (int i = 0; i < number; i++)
//     {
//         printf("\nStudent %d = Name: %s ID: %d\n", i , person[i].name, person[i].id);
//     }
// }
// ===================================================================================
// struct complex
// {
//     int imag;
//     float real;
// };

// struct number
// {
//     struct complex comp;
//     int integers;
// } num1, num2;

// int main()
// {
//     printf("%d", num1.comp.imag = 3);
//     printf("\n%f", num1.comp.real = 2.0);
//     printf("\n%d", num1.integers = 2.0);
// }
// ===================================================================================
// struct person
// {
//     int age;
//     float weight;
//     char name[50];
// };

// int main()
// {
//     struct person *ptr;
//     ptr = (struct person*) malloc(sizeof(struct person));
//     ptr->age = 20;
//     ptr->weight = 50.2;
//     strcpy(ptr->name, "Ahmad");
//     printf("name: %s weight: %f age: %d", ptr->name, ptr->weight, ptr->age);
// }
// ===================================================================================

