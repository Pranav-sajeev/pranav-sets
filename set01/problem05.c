
#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int input()
{
    int x;
    printf("Enter the first number:");
    scanf("%d",&x);
    return x;
}
int compare(int a, int b, int c)
{
    int largest;

    if (a>=b && a>=c)
    {
        largest = a;
    }
    else if (b>=a && b>=c)
    {
        largest = b;
    }
    else if (c>=a && c>b)
    {
        largest = c;
    }
    else
    {
        printf("they are equal");

    }
    return largest;
}
void output(int a, int b, int c, int largest)
{
    if(a==b&&b==c)
    {
    printf("they are equal");
    }
    else
    {
    printf("the largest btw %d and %d and %d is %d",a,b,c,largest);
    }
}
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);

}