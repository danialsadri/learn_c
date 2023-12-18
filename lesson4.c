#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// ===================================================================================
// Function
// function prototype
// function call
// fnction definition
// return statement
// arguments
// c recursion | factoral
// global variable
// local variable
// static variable
// is_prime
// display all prime numbers between two intervals
// find G.C.D using recursion
// calculate the power of a number using recursion
// <return type> <name>(arguments){ }
// ===================================================================================
// Function
// int main(){
//     printf("hello");
//     return 0;
// }
// ===================================================================================
// void test(){ // function prototype
//     printf("hello");
// }

// int main(){
//     test(); // function call
// }
// ===================================================================================
// int test(){
//     int a = 10;
//     return a;
// }

// int main(){
//     int myNumber = test();
//     printf("%d", myNumber);
// }
// ===================================================================================
// int MyFunction(int x){
//     return x*x;
// }

// int main(){
//     printf("%d", MyFunction(4));
// }
// ===================================================================================
// void MyFunction(char name[]){
//     printf("Hello %s", name);
// }

// int main(){
//     MyFunction("ahmad");
// }
// ===================================================================================
// long long int factorial(int number)
// {
//     if (number == 1)
//     {
//         return 1;
//     }
//     return number * factorial(number - 1);
// }

// int main(){
//     printf("%ld", factorial(4));
// }
// // ===================================================================================
// int MyGlobal = 10; // global variable
// static int MyGlobal = 10; // static variable

// int main(){
//     printf("%d", MyGlobal);
// }
// ===================================================================================
// is_prime

// bool IsPrime(int number)
// {
//     for (int i = sqrt(number); i > 1; i--)
//     {
//         if (number % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     if (IsPrime(13) == true)
//     {
//         printf("true");
//     }
//     else
//     {
//         printf("false");
//     }
// }
// ===================================================================================
// display all prime numbers between two intervals

// bool IsPrime(int number)
// {
//     if (number == 1) {
//         return false;
//     }
//     for (int i = sqrt(number); i > 1; i--)
//     {
//         if (number % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     for (int i = a; i <= b; i++)
//     {
//         if (IsPrime(i) == true)
//         {
//             printf("%d\n", i);
//         }
//     }
// }
// ===================================================================================
// int gcd(int a, int b)
// {
//     if (b != 0)
//     {
//         return gcd(b, a % b);
//     }
//     else
//     {
//         return a;
//     }
// }

// int main()
// {
//     printf("gcd= %d", gcd(12, 24));
// }
// ===================================================================================
// long long int power(int x, int tavan)
// {
//     if (tavan == 0)
//     {
//         return 1;
//     }
//     return x * power(x, tavan - 1);
// }

// int main()
// {
//     printf("result is: %ld", power(2, 3));
// }
// ===================================================================================
