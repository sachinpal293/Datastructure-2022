#include<iostream>
using namespace std;

bool sorted(int arr[], int index, int n) 
{
    
    if(index==n-1)
    {
        return true;
    }

    return arr[index] <arr[index+1] && sorted(arr,index+1, n);
}
int main()
{
    int arr[] = {1,2,3,9,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = sorted(arr,0,size);
    if(result==1)
    {
        cout<<"The given Array is sorted";
    }
    else
    {
        cout<<"The Given Array is not sorted";
    }
}