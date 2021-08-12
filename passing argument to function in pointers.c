// passing argument to a function using pointers
// sum of two numbers using pointers
#include<stdio.h>
void sum(int *a, int *b, int *t);
int main()
{
    int num1, num2, total;
    printf("\n Enter the first number: ");
    scanf("%d",&num1);
    printf("\n Enter second number: ");
    scanf("%d",&num2);
    sum(&num1, &num2, &total);
    printf("\n Total = %d", total);
}
void sum(int *a, int *b, int *t)
{
    *t = *a + *b;
}
