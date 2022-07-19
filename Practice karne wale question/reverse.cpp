#include<iostream>
using namespace std;

int main() 
{
    long long int x = 12344568275;
    long long int rem = 0, rev=0;
    while(x!='\0')
    {
        rem = x%10;
        x = x/10;
        rev = rev*10+rem;
    }
    cout<<rev<<endl;
    return 0;
}