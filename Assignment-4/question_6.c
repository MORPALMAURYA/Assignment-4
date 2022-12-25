// write a program to print the first 10 even natural numbers

#include<stdio.h>
int main()
{
    int i;
    printf("enter even number \n");
    scanf("%d",&i);

    for(i=1;i<=10;i++)
    if(i%2==0)
    printf("%d\n",i);
    return 0;
}