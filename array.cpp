//passing an array as a parameter
#include<iostream>
using namespace std;
int * fun(int size)
{
    int *p;
    p = new int[size];
    cout<<"Enter the elements:\n";
    for(int i = 0; i < size; i++)
        cin>>p[i];
    return p;
    
}
int main()
{
    int *ptr, sz = 5;
    ptr = fun(sz);
    cout<<"The array is:\n";
    for(int i = 0; i < sz; i++)
        cout<<ptr[i]<<endl;
}
