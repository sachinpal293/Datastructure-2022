#include<iostream>
#include<Math.h>
using namespace std;


int div(int n, int a, int b)
{
    if((n%a==0)&&(n%b!=0))
    { 
       return n;
    }
   
   return div(n+1,a,b);
}

int main()
{
   long long int n = 24, a = 4, b = 3;
   cout<<div(n,a,b);
   return 0;
}



