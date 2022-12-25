// Q.1 write a program to print iNeuron 5 times on the screen.
// topic- Iterative control statement

#include<stdio.h>
int main()
{
  int i;
     printf("enter a number \n");
     scanf("%d",&i);

     for(i=0;i<=5;i++)
     {
        printf("iNeuron \n",i);
     }

     return 0;
}