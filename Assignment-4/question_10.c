// write a program to print a table of 5.

#include<stdio.h>
int main()
{
    int i,sum=5;
    printf("table of 5\n");
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",sum,i,sum*i);

    }
    return 0;
    
}