#include<iostream>
using namespace std;

int selection_sort(int *arr, int n)
{
    int index;
    for(int i = 0;i<n;i++)
    {
        index = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[index]>arr[j])
            {
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {38,25,65,6,5,11};
    selection_sort(arr,6);

    for(int i =0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
}
