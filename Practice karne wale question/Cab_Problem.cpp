#include<iostream>
using namespace std;

void cab(int X,int Y)
{

  int T;
  while(T--)
  {
    if(X<Y)
    {
        cout<<"First"<<endl;
        break;
    }
    else if(X==Y)
    {
        cout<<"ANY"<<endl;
        break;
    }
    else
    {
        cout<<"Second"<<endl;
        break;
    }
 }
}

int main(){
    int a = 30, b = 65;
    cab(a,b);
    return 0;
}