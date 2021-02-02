#include<iostream>
using namespace std;
void print_array(int a[], int n)
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void sort_array_simple(int a[], int n)
{
    // Very simple approach by simple counting
    // Traverses the array twice
    int c0=0,c1=0,c2=0,i,j;
    for(i=0 ; i<n ; i++)
    {
        if(a[i] == 0)
            c0++;
        else if(a[i] == 1)
            c1++;
        else
            c2++;
    }
    j=0;
    while(j<n)
    {
        if(c0>0)
        {
            a[j++] = 0;
            c0--;
        }
        else if(c1>0)
        {
            a[j++] = 1;
            c1--;
        }
        else if(c2>0)
        {
            a[j++] = 2;
            c2--;
        }
    }
    
}
void sort_array_dutch(int a[], int n)
{
    // Dutch flag algorithm
    // Traverses the array only once
    int low=0,mid=0,high=n-1,temp;
    while(high>mid)
    {
        //cout<<high<<" "<<mid<<" "<<low<<"\n";
        if(a[mid] == 0)
        {
            temp = a[mid];
            a[mid] = a[low];
            a[low] = temp;
            low++;
            mid++;
        }
        else if(a[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = a[high];
            a[high] = a[mid];
            a[mid] = temp;
            high--;
        }
        //cout<<"\n--------\n";
        //print_array(a,n);
        //cout<<"\n--------\n";

    }
}
int main()
{
    int arr[] = {0,1,0,2,1,0,1,2,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort_array_simple(arr,n);
    // sort_array_dutch(arr,n);
    print_array(arr,n);
}