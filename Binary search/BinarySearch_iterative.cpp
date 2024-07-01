// Iterative binary search function.
// The array is assumed to be sorted first

// t(n) = t(n/2)+1    o(logn)
#include<iostream>
using namespace std;

////////////////////
int ibsearch(int a[], int low, int high, int key) 
{
int mid;
while(low<=high)
{
    mid=low+(high-low)/2;

    if (key== a[mid]) return mid;
    if (key > a[mid]) low=mid+1;

    else high=mid-1;
}
    
    return -1; 
}
////////////////////
int main(void)
{
    int a[]={5,7,9,11,14,16,19,20};
    
    int n=sizeof(a)/sizeof(a[0]);

    int p;

    int key=14;

    p = ibsearch(a,0,n-1,key);

    cout<< p << endl;

}