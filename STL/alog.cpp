#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
  
    // for(int i : v){
    //     cout<<i<<endl;
    // }

    cout<<binary_search(v.begin(),v.end(),7)<<endl;

    cout<<lower_bound(v.begin(),v.end(),5) -v.begin()<<endl;
    
    int a = 56;
    int b = 34;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string str = "sachin";
    reverse(str.begin(), str.end());
    cout<<str;
    
    rotate(v.begin(),v.begin()+2,v.end());
    for(int i :v)
    {
        cout<<i<<endl;
    }
}