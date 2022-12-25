// write  a program to print rhe first 10 odd natural numbers.

#include<stdio.h>
int main()
{
    int i;
    printf("enter a number\n");
    scanf("%d",&i);

    for(i=0;i<=10;i++)
    if(i&1)
    printf("%d\n",i);
    return 0;
}