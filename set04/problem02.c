#include <stdio.h>
typedef struct 
{
    int num, den;
} Fraction;
Fraction intput_fraction();
Fraction find_smallest(Fraction f1,Fraction f2,Fraction f3);
void output(Fraction smallest);

int main()
{
    Fraction f1,f2,f3,smallest;
    printf("Enter the first fraction (numerator denominator): ");
    f1= intput_fraction();
    printf("Enter the second fraction (numerator denominator): ");
    f2= intput_fraction();
    printf("Enter the third fraction (numerator denominator): ");
    f3=intput_fraction();
    smallest=find_smallest(f1,f2,f3);
    output(smallest);
    return 0;
}
Fraction intput_fraction()
{
    Fraction f;
    scanf("%d %d",&f.num,&f.den);
    return f;
}
Fraction find_smallest(Fraction f1,Fraction f2,Fraction f3)
{
    double value1 = (double)f1.num / f1.den;
    double value2 = (double)f2.num / f2.den;
    double value3 = (double)f3.num / f3.den;
    if (value1 <= value2 && value1 <= value3)
    {
        return f1;
    }
    else if (value2<=value1 && value2<=value3)
    {
        return f2;
    }
    else
    {
        return f3;
    }
}
void output(Fraction smallest)
{
    printf("The smallest of %d/%d,%d/%d,and %d/%d is %d/%d\n",1,2,1,3,1,4,smallest.num,smallest.den);
}