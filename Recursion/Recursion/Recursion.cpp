#include"iostream"
using namespace std;
void counting(int);
int main()
{
    counting(5);
}

void counting(int n)
{
    if(n==0) return;
    counting(n-1);
    cout<<n<<endl;
}