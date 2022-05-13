#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Sachin";
    m[2] = "Mridul";
    m[3] = "Mannu";
    m[4] = "Maynk";
    m.insert({5,"Ben 10"});
    m.erase(4);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 5 --> "<<m.count(12)<<endl;

}