#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> s;
    s.push("Sachin");
    s.push("Kumar");
    s.push("Pal");
    cout<<"first element "<<s.front()<<endl;

    s.pop();
     cout<<"first element "<<s.front()<<endl;

}