#include"iostream"
using namespace std;

void insertionsort(int *arr, int n)
{
    for(int i = 1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(j;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;

            }
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {10,25,64,8,7,3,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);

    for(int i = 0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}