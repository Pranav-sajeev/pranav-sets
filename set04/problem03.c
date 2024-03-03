#include <stdio.h>

void input_n_and_r(int *n, int *r);
int factorial(int n);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int n,r,result;
    input_n_and_r(&n,&r);
    result = nCr(n,r);
    output(n,r,result);
    return 0;
}
void input_n_and_r(int *n, int *r)
{
    printf("Enter the value of n: ");
    scanf("%d",n);
    printf("Enter the value of r: ");
    scanf("%d",r);
}
int factorial(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
int nCr(int n, int r)
{
    return factorial(n)/(factorial(r)* factorial(n-r));
}
void output(int n, int r, int result)
{
    printf("For n =%d and r = %d,nCr=%d\n",n,r,result);
}



