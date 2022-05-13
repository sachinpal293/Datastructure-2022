#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Sachin");
    s.push("Kumar");
    s.push("Pal");

   cout<<"Top elments - > "<<s.top()<<endl;
   s.pop();
   cout<<"Top Elements - > "<<s.top()<<endl;

   cout<<"Last Element - > "<<s.size()<<endl;
   cout<<"Last element -> "<<s.empty()<<endl;
   

}