#include<iostream>

using namespace std;
int peak(int arr[],int size)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start< end){
        if(arr[mid]< arr[mid+1])
        {
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return arr[start];
}
int main()
{
    int arr[4] = {1,7,5,2};
    cout<<"The peak value is "<<peak(arr,4)<<endl;

}