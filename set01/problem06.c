//Write a C program to compare three numbers using pass by reference
#include<stdio.h>

void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

void input(int *a, int *b, int *c)
{
    printf("enter the value of a:\n");
    scanf("%d",a);
    printf("enter the value of b:\n");
    scanf("%d",b);
    printf("enter the value of c:\n");
    scanf("%d",c);
}
void compare(int a, int b, int c, int *largest)
{
    if(a>=b && a>=c)
    {
        *largest=a;
    }
    else if(b>=a && b>=c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("the largest of %d, %d and %d is %d",a,b,c,largest);
}
int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
   return 0;
}