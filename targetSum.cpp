#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(5);
    int value;
    cout<<"Enter the array\n";
    for(int i = 0; i < 5; i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the target: ";
    cin>>value;
    for(int i = 0; i < 4; i++)
    {
        for(int j = i+1; j < 5; j++)
        {
            if(v[i] + v[j] == value)
            cout<<"\n" <<v[i]<<" and "<<v[j];
        }
    }
    return 0;
}