#include<iostream>
using namespace std;
int main()
{
    int number, count = 0;
    cout<<"Enter the number: ";
    cin>>number;
    while(number > 0) {
        count++;
        number = number / 10;
    }
    cout<<count<<endl;
    return 0;
}