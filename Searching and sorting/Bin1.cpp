#include <iostream>

using namespace std;

int binarysearch(int arr[],int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start <=end)
    {
        if(arr[mid] == key){
            return mid;
        }

        if(key> arr[mid])
        {
            start = mid+1;
        }
        else
        {
           end = mid-1;  
        }

        mid = start+(end-start)/2;
    }
    return -1;
}

int main()
{
 int even[6] = {10,20,25,37,64,85};
 int odd[5] = {4,5,8,12,19};
 
 int index = binarysearch(odd, 5 , 20);

 cout<< "Index is "<<index<<endl;
 return 0;
}