#include<iostream>
using namespace std;

bool pol(int x, int temp, int rem, int rev)
{
    if(x=='\0'||x<0)
    {
        return false;
    }
    rem = x%10;
    rev = rev*10+rem;
    if(temp==rev)
    {
        return true;
    }
    pol(x/10,temp,rem,rev);
}
int main()
{
    cout<<pol(12345,12345,0,0);
    return 0;
}
