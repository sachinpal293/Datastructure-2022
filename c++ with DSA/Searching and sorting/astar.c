#include<stdio.h>
#include<conio.h>

int main()
{
   for(int i = 1;i<=7;i++)
   {
       for(int j = 1;j<=5;j++)
       {
           if((i==1&&j>1&&j<5)|| (j==1&&i>1)||(j==5&&i>1)||i==4)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");
   }
   
}