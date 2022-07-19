#include<iostream>
using namespace std;

float find_area_rectangle(float len, float b)
{
    return len*b;
}

float find_parameter(float len, float b)
{
    return 2*(len+b);
}

int main()
{
    float length, breath;
    cout<<"Enter the value of lenght: ";
    cin>>length;

    cout<<"Enter the value of breath: ";
    cin>>breath;

    cout<<"Area of reactangle : "<<find_area_rectangle(length,breath)<<endl;

    cout<<"Parameter of reactangle : "<<find_parameter(length, breath);

    return 0;
}