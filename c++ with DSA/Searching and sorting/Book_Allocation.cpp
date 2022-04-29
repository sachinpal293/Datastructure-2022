
//----------------------------------------------------------------
//               Book Allocation Problem 
//================================================================

#include<iostream>
using namespace std;
bool isPossible(int arr[], int n,int m,int mid)
{

    int studentCount = 1;
    int pagesum = 0;
    for(int i = 0;i<n;i++){
        if(pagesum+arr[i] <= mid)
        {
            pagesum+=arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount>m ||arr[i]>mid)
            {
                return false;
            }
            else
            {
                pagesum = arr[i];
            }
        }
    }
    return true;
}
int allocatebook(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;

    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int ans =-1;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[4] = {12,34,67,90};
    int m = 2;
    cout<<allocatebook(arr,4,m);
}