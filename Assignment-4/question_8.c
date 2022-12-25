// write a program to print seequares of the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i,r,s=0;
    for(i=1;i<=10;i++)
    {
        r=i*i;
        s=s+r;
        printf("\n the sequare of %d is %d ",i,r);
    }
    printf("\n the sum of first 10 natural number are %d",s);
    return 0;
}