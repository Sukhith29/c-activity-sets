//2. Write a C program to add two numbers.

#include <stdio.h>



int input()
{
    int n;
    printf("enter the number 1: ");
    scanf("%d",&n);
    return n;
}

int add(int a,int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}

void output(int a,int b,int c)
{
    printf("the sum of %d and %d is %d",a,b,c);
}

int main()
{
    int a,b,c;
    a=input();
    b=input();
    c=add(a,b);
    output(a,b,c);
    return 0;
}