#include"iostream"
using namespace std;
void counting(int);
int main()
{
    counting(1);
}

void counting(int n)
{
    if(n==6) return;
    counting(n+1);
    cout<<n<<endl;
}