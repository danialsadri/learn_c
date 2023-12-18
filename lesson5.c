#include <stdio.h>

// ==============================================================
// Arrays
// why we need them
// how to decrlare an array ?
// dataType arrayName[arraySize]
// Access Array Elements
// how to initialize an array?
// Change value of Array elements
// Calculate Average Program
// C Multidimensional Arrays
//  sum of two matrics
// Passing arrays to function
// ==============================================================
// int main()
// {
//     int MyArray[10] = {31,234,13,4,21,34,21,34,12, 106}; // initialize
//     char MyChar[20] = {'M', 'O', 'H', 'A', 'M', 'M', 'A', 'D'};
//     printf("%d", MyArray[9]);
//     printf("%c", MyChar[4]);
// }
// ==============================================================
// int main()
// {
//     char MyName[100];
//     scanf("%s", &MyName);
//     printf("Welcome %s", MyName);
// }
// ==============================================================
// int main()
// {
//     char MyName[100];
//     scanf("%s", &MyName);
//     printf("Welcome %c", MyName[5]);
// }
// ==============================================================
// int main()
// {
//     char MyName[100];
//     scanf("%s", &MyName);
//     MyName[0] = 'H';
//     printf("welcome %s", MyName);
// }
// ==============================================================
// int main()
// {
//     int MyNumber[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     for (int i = 0; i <= 9; i++)
//     {
//         printf("%d\t", MyNumber[i]);
//     }
// }
// ==============================================================
// Calculate Average Program

// int main()
// {
//     printf("Please Enter Number of Scores: ");
//     int scores, temp;
//     scanf("%d", &scores);
//     int scoresArray[scores];

//     for (int i = 0; i < scores; i++)
//     {
//         printf("Score No.%d: ", i);
//         scanf("%d", &temp);
//         scoresArray[i] = temp;
//     }

//     printf("Your scores: \n");
//     for (int i = 0; i < scores; i++)
//     {
//         printf("Score No.%d = %d\n", i, scoresArray[i]);
//     }
// }
// ==============================================================
// Calculate Average Program

// int main()
// {
//     printf("Please Enter Number of Scores: ");
//     int scores, temp;
//     scanf("%d", &scores);
//     int scoresArray[scores];

//     for (int i = 0; i < scores; i++)
//     {
//         printf("Score No.%d: ", i);
//         scanf("%d", &temp);
//         scoresArray[i] = temp;
//     }

//     printf("Your scores: \n");
//     int sum = 0;
//     for (int i = 0; i < scores; i++)
//     {
//         printf("Score No.%d = %d\n", i, scoresArray[i]);
//         sum += scoresArray[i];
//     }
//     printf("Avarge: %d", sum / scores);
// }

// ==============================================================
// Calculate Average Program
// int scoresArray[100];
// int scores;

// void insertArray()
// {
//     printf("Please Enter Number of Scores: ");
//     int temp;
//     scanf("%d", &scores);
//     for (int i = 0; i < scores; i++)
//     {
//         printf("Score No.%d: ", i);
//         scanf("%d", &temp);
//         scoresArray[i] = temp;
//     }
// }

// void printArray()
// {
//     printf("Your scores: \n");
//     int sum = 0;
//     for (int i = 0; i < scores; i++)
//     {
//         printf("Score No.%d = %d\n", i, scoresArray[i]);
//     }
//     printf("Avarge: %d", calculateAvarage(scoresArray, scores));
// }

// int calculateAvarage(int array[], int length)
// {
//     int sum = 0;
//     for (int i = 0; i < length; i++)
//     {
//         sum += array[i];
//     }
//     return sum / length;
// }

// int main()
// {
//     insertArray();
//     printArray();
// }

// ==============================================================
// C Multidimensional Arrays

// int main()
// {
//     int matrix[4][4] = {
//         {1, 2, 3, 4},
//         {1, 2, 3, 4},
//         {1, 2, 3, 4},
//         {1, 2, 3, 4},
//     };

//     printf("%d", matrix[2][2]);
// }
// ==============================================================
// C Multidimensional Arrays

// int main()
// {
//     int matrix1[2][2];
//     int matrix2[2][2];
//     int matrix3[2][2];

//     printf("matrix1: \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     printf("matrix2: \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

//     printf("result is: \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d", matrix3[i][j]);
//         }
//         printf("\n");
//     }
// }

// ==============================================================
// C Multidimensional Arrays

// void print(int max, int arry[max][max])
// {
//     for (int i = 0; i < max; i++)
//     {
//         for (int j = 0; j < max; j++)
//         {
//             printf("%d", arry[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int matrix1[2][2];
//     int matrix2[2][2];
//     int matrix3[2][2];

//     printf("matrix1: \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     printf("matrix2: \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

//     printf("results is: \n");
//     print(2, matrix3);

// }
// ==============================================================
