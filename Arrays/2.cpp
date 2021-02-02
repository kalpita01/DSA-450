// Uses the concept of linear search
#include<iostream>
using namespace std;

int find_max(int a[],int n)
{
    int i,max=a[0],temp;
    for(i=1 ; i<n ; i++)
    {
        if(max < a[i])
        {
            temp = a[i];
            a[i] = max;
            max = temp;
        }
    }
    return max;
}
int find_min(int a[],int n)
{
    int i,min=a[0],temp;
    for(i=1 ; i<n ; i++)
    {
        if(min > a[i])
        {
            temp = a[i];
            a[i] = min;
            min = temp;
        }
    }
    return min;
}
int main()
{
    int arr[] = {1,3,6,8,2,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The max value in the array is:"<<find_max(arr,n)<<"\n";
    cout<<"The min value in the array is:"<<find_min(arr,n)<<"\n";
}
