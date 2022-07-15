#include "iostream"
using namespace std;
int fact(int);
int main(){

   int number;
   cout<<"Enter a number to calculate factorial of that number : ";
   cin>>number;
   cout<<fact(number);
   return 0;
}
int fact(int n)
{
    if (n==0) return 1;
    return n*fact(n-1);
}