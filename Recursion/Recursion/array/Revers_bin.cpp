#include<iostream>
using namespace std;

int search(int arr[], int target, int s, int e )
{
  if(s>e){
    return -1;
  }
  int mid = s+(e-s)/2;
  if(arr[mid]==target){
    return mid;
  }

  if(arr[s]<=arr[mid]){
    if(target>=arr[s]&& target<=arr[mid]){
        return search(arr,target,s, mid-1);
  }
  else
  {
    return search(arr,target,mid+1,e);
  }
}

if(target>=arr[mid]&&target <=arr[e])
{
    return search(arr,target,mid+1,e);
}

return search(arr,target,s,mid-1);
}

int main()
{
    int arr[] = {5,6,7,8,9,1,2,3};
    cout<<search(arr,7,0,7)<<endl;

    return 0;
}