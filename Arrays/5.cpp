/*
NOTE - Here the order of the elements does not matter
       we just have to make sure all the negative numbers are 
       to the left side
    
    Also this question is similar to segragating 0's and 1's present
    in an array.
*/
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
void arrange(int a[], int n)
{
    // A simple two pointer approach 
    // it makes sure all the left elements are negative
    int left=0, right=n-1,temp;
    while(right>left)
    {
        if(a[left]>0)
        {
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            right--;
        }
        else
        {
            left++;
        }
    }
}
int main()
{
    int a[] = {12, 11, -13, -5, 6, -7, 5, -3, -6,-2};
    int n = sizeof(a)/sizeof(a[0]);
    arrange(a,n);
    print_array(a,n);
}