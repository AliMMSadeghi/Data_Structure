#include <iostream>
using namespace std;


int insert(int a[], int key, int n, int c)
{
    if(n>=c)
        return n;
    a[n]=key;
    return n+1;
}


int main()
{

int a[10] = {2, 4, 6, 3, 1, 5, 19};
int c=sizeof(a)/sizeof(a[0]);
int n=7;

int key=21;

n=insert(a, key, n, c);

for(int i=0; i<n; i++)
    cout<< a[i] << "\t" << endl;

}