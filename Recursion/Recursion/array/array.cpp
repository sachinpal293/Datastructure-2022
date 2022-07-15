#include<iostream>
using namespace std;

int  *array(int arr[], int n, int size, int target)
{
      int *list = new int[size];
      int s = 0;
      if(n==size-1)
      {
        return list;
      }
     if(arr[n] == target)
     {
        list[s++] = n;
     }
    int *ans = new int[size];
    ans =  array(arr,n+1,size,target);

    for(int i = 0;i<size;i++)
    {
      list[i] = ans[i];
    }

    return list;
}

int main()
{
    int a[] =  {10, 20,30,40,10,10};
    int b[5];
    int *b1= array(a,0,6,10);
    
    cout<<b1[0]<<" "<<b1[1]<<endl;

    return 0;
}