// Linear Search

#include<iostream>
using namespace std;
///////////////////////////////
int find(int a[], int n, int key)
{

    for(int i=0; i<=n-1; i++)
        if (key ==a[i])
           return i;
          
    return -1;

}
///////////////////////////////
int main()
{
    int a[] = {19, 20, 13, 20, 6, 14}; // Each integer allocates 4 byte of memory

    int n;
    n=sizeof(a)/sizeof(a[0]);
    // cout << n << endl;

    int key = 20;
    int p;
    
    p = find(a, n , key);


    if(p==-1)
        cout << "not found" << endl;
    else
        cout << p << endl;

     return 0;

}