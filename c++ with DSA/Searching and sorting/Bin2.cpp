#include<iostream>
using namespace std;

int Leftoccurence(int arr[], int size, int key) 
{
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int value = -1;
    while(start<=end){
        if(arr[mid]==key)
        {
            value = mid;
            end = mid-1;
        }else if(arr[mid]< key)
        {
            start = mid+1;
        }
        else{
             end = mid-1;
        }

        mid = start+(end-start)/2;
    }
    return value;
}
int Rightoccurence(int arr[], int size, int key) 
{
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int value = -1;
    while(start<=end){
        if(arr[mid]==key)
        {
            value = mid;
            start = mid+1;
        }else if(arr[mid]< key)
        {
            start = mid+1;
        }
        else{
             end = mid-1;
        }

        mid = start+(end-start)/2;
    }
    return value;
}
int main()
{
  int arr[8]={1,2,3,3,3,3,3,5};
  
  cout<<"The Value of 3 at Left first occurence at "<<Leftoccurence(arr,8,3)<<endl;
  cout<<"The Value of 3 at Right Last Occurence at "<<Rightoccurence(arr,8,3)<<endl;
  return 0;
}