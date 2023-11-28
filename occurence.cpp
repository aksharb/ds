#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int num,pos=0;
    cout<<"Enter the elements in the vector\n";
    for(int i = 0; i < 5; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    cout<<endl;
    cout<<"The vector is:";
    for(int i = 0; i < v.size(); i++)
    cout<<v[i]<<" ";
    cout<<endl;
    cout<<"Enter the element whose occurence you want to check: ";
    cin>>num;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == num)
        {
            pos = i + 1;
        }
    }
    if(pos == 0)
    {
        cout<<"Element is not present in the array\n";
    }
    else
    {
        cout<<"The element is present at location "<<pos<<endl;
    }
    return 0;
}