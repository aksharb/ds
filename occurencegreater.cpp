#include<iostream>
using namespace std;
int main()
{
    vector<int> v(5);
    int element, count = 0;
    cout<<"Enter the elements\n";
    for(int i = 0; i < 5; i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the element to count occurences: ";
    cin>>element;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] > element)
            count++;
    }
    if(count == 0)
        cout<<"\nNo elements greater than "<<element;
    else
        cout<<"\nThere are "<<count<<" elements greater than "<<element;
    return 0;
}