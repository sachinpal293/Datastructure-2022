#include<iostream>
using namespace std;


// Return the boolean values 
bool find(int arr[], int size, int target, int index)
{
    if(index==size-1)
    {
        return -1;
    }
    
    return arr[index] == target || find(arr, size, target,index+1);
}


// Return the index value by search list from 0 to end;
int findIndex(int arr[], int size, int target, int index)
{
    if(index==size-1)
    {
        return -1;
    }
    if(arr[index] == target)
    {
        return index;
    }
    return find(arr, size, target,index+1);
}

// Return the index value by search list from end to 0
int find_from_last(int arr[], int target, int index)
{
    if(index==-1)
    {
        return -1;
    }
    if(arr[index] == target)
    {
        return index;
    }
    return find_from_last(arr, target,index-1);
}


void findAlltheindex(int arr[],int target, int size, int index)
{
    if(index==size-1)
    {
        return;
    }
    if(arr[index]==target)
    {
       cout<<"The value present at index no. "<<index<<endl;
    }
    findAlltheindex(arr,target,size,index+1);   
}


int *Allindex(int arr[], int target, int size, int index)
{
    int *list = new int[size];
    int s = 0;
    if(index==size-1)
    {
        return list;
    }
    if(arr[index]==target)
    {
        list[s++] = index;
    }
    Allindex(arr,target,size,index+1);
}


int main()
{
    int arr[] = {10,25,10,36,48,25};
    int size = 5;
    
    int* result = Allindex(arr,10,size,0);
    int val = *result++;
    cout<<val;
   return 0;
}