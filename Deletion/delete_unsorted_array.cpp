// delete (for unsorted array)

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////
int lsearch(int a[], int n, int key)
{
    for(int i=0; i<n; i++)   
        if (key==a[i])
            return i;

    return -1;
}
////////////////////////////////////////////////////////////

int del(int a[], int n, int key)
{
    int p;
    p = lsearch(a,n,key);
    if (p==-1)
    {
        cout << "Element not found";
        return n;
    }

    for(int i=p; i<=n-2; i++)
        a[i] = a[i+1];
    
    return n-1;
}
////////////////////////////////////////////////////////////

int main(void)
{
    int a[] = {6,8,3,2,1,72,89};  
    int n = sizeof(a)/sizeof(a[0]);
    int key = 1;

    n = del(a,n,key);

    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout << endl;

}