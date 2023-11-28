#include<iostream>
using namespace std;
int main()
{
    vector<int> v(5);
    int sumEven = 0, sumOdd = 0, difference = 0;
    cout<<"Enter the vector elements\n";
    for(int i = 0; i < 5; i++)
    {
        cin>>v[i];
    }
    for(int i = 0; i < 5; i++)
    {
        if(i%2 == 0)
            sumEven = sumEven + v[i];
        else
            sumOdd = sumOdd + v[i];
    }
    difference = sumEven - sumOdd;
    if(difference < 0)
        difference = difference * -1;
    cout<<"The difference is "<<difference;
    return 0;
}