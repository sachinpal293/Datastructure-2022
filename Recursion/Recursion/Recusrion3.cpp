#include "iostream"
using namespace std;

void printspr(int n, string str[])
{
    if(n==0) return;

    printspr(n/10,str);

    int number = n%10;
    cout<<str[number]<<" "<<endl;

    // cout<<str[n%10]<<" ";
}
int main(){

    int n;
    cout<<"Enter the input here : ";
    cin>>n;

    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<"Answer is : ";
    printspr(n,str);

    return 0;
}