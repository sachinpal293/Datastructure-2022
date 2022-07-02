#include<iostream>
using namespace std;

int bubble_sort(int *arr, int n)
{
    int temp =0;
    for(int i = 0;i<n-1;i++)
    {
        int flag = 0;
        for(int j = 0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag =1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {38,25,65,6,5,11};
    bubble_sort(arr,6);

    for(int i =0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
}
