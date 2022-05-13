#include<iostream>
#include<set>
using namespace std;
int main()
{
    // Behind the it is use BST 
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(0);
    s.insert(4);
    for(auto i : s)
    {
        cout<<i<<endl;
    }cout<<endl;
    
    set<int>::iterator it = s.begin();
    // it++;

    s.erase(it);
    for(auto i : s)
    {
        cout<<i<<endl;
    }
}