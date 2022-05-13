// Vector is a Dynamic array
#include "iostream"
#include "vector"
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);
    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(10);

    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(20);

    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(15);cout<<"Capacity "<<v.capacity()<<endl;

    cout<<"Size = "<<v.size()<<endl;
    for(int i:a){
        cout<<" "<<i<<endl;
    }
    return 0;
    

}