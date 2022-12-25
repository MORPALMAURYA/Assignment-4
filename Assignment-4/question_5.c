// write a program to print the first 10 natural number in reverse order.

#include<stdio.h>
int main()
{
    int i;
    printf("enter a number\n");
    scanf("%d",&i);

    for(i=10;i>=1;i--)
    if(i&1)
    printf("%d\n",i);
    return 0;
}