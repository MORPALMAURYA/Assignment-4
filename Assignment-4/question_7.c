// write a program to print 10 even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i;
    printf("enter even number \n");
    scanf("%d",&i);

    for(i=10;i>=1;i--)
    if(i%2==0)
    printf("%d\n",i);
    return 0;
}