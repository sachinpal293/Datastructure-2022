#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of passengers : "<<endl;
    cin>>n;
    int age[n],i,min;
    float discount_amout=0, total_fare = 0;
    cout<<"Enter all passengers age :"<<endl;
    for(i = 0;i<n;i++)
    {
        cin>>age[i];
    }
    min = age[0];
    for(i = 1;i<n;i++)
    {
       if(min>age[i])
       {
        min = age[i];
       }
    }
    // printf("Discount : %d\n",min);
    cout<<"Discount percentage is : "<<min<<"%"<<endl;
    total_fare = n * 10;
    discount_amout = total_fare - (total_fare/100*min);
    cout<<discount_amout;
    return 0;
}