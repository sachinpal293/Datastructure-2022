#include<iostream>
using namespace std;

bool check_palindrom(int x)
{
   // Condition if value is negative then return false
   if(x<0)
   {
    return 0;
   }
   
    int first_rem = x%10,temp = x;
    int rem,rev = 0;
    while(x!='\0') 
    {
        
        rem = x%10;
        x = x/10;
        rev = rev*10+rem;
    }
    cout<<temp<<"  "<<rev<<endl;
    if(temp==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() 
{
    int value = check_palindrom(1000021);
    cout<<value<<endl;
    return 0;
}