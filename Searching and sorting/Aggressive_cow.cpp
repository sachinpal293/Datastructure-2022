
//----------------------------------------------------------------
//    Agreessive Cow Problem (This is Question is Pending )
//================================================================
#include<iostream>
using namespace std;
bool isPossible(int arr[], int n, int m , int mid)
{
    int cowcount = 1;
    int lastposition = 1;
}
int agressivecow(int arr[], int n, int m)
{
    int s = 0;
    int maxi = -1;
    for(int i =0; i<n;i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans = mid;
            s = mid +1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}