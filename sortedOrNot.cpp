#include<iostream>
using namespace std;
int main()
{
    vector<int> v(5);
    bool flag = true;
    cout<<"Enter the elements in the vector:\n";
    for(int i = 0; i < 5; i++)
    {
        cin>>v[i];
    }
    for(int i = 1; i < 5; i++)
    {
        if(v[i] < v[i-1])
            flag = false;
    }
    if(flag)
        cout<<"the array is sorted";
    else
        cout<<"The array is not sorted";
    return 0;
}