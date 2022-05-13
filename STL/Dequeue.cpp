#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d;
    d.push_back(20);
    d.push_front(10);
    for(int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_front();
    // for(int i : d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<"Print First index elements : "<<d.at(1)<<endl;
    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;
    
    return 0;
}