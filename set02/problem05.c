#include <stdio.h>
int input();
int find_gcd(int a,int b);
void output(int a,int b,int gcd);

int main()
{
    int num1=input();
    int num2=input();
    int gcd=find_gcd(num1,num2);
    output(num1,num2,gcd);
    return 0;
}
int input()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a,int b)
{
    int remainder;
    while (b !=0)
    {
        remainder = a % b;
        a=b;
        b=remainder;
    }
    return a;
    
}
void output(int a,int b,int gcd)
{
    printf("The GCD of %d and %d is:%d\n",a,b,gcd);

}