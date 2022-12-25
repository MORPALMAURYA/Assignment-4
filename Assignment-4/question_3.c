// write a program to print the first 10 natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i;
    printf("enter a number \n");
    scanf("%d",&i);

    for(i=10; i>=1; i--)
    printf("%d\n",i);
    return 0;
}