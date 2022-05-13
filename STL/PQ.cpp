#include<iostream>
#include<queue>

using namespace std;
int main(){
    priority_queue<int> maxi;

    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(5);
    maxi.push(10);
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }cout<<endl;


    mini.push(10);
    mini.push(2);
    mini.push(5);
    mini.push(10);

    int s = mini.size();
    for(int i=0;i<s;i++){
        cout<<mini.top()<<endl;
        mini.pop();
    }cout<<endl;
    return 0;
}