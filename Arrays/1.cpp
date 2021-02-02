#include<iostream>
using namespace std;
void print_array(int a[],int size)
{
    int i;
    for(i=0 ; i<size ; i++)
    {
        cout<<a[i]<<" ";
    }
}
void reverse_iterative(int a[], int n)
{
    int i,start=0,end=n-1,temp;
    for(i=0 ; i < n/2 ; i++)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
void reverse_recursive(int a[],int start,int end)
{
    int temp;
    if(start >= end)
        return;
    temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    start++;
    end--;
    reverse_recursive(a,start,end);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    // reverse_recursive(arr,0,n-1);
    // reverse_iterative(arr,n);
    print_array(arr,n);
}