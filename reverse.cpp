#include<iostream>
using namespace std;
int main()
{
    int number, rev=0, rem;
    cout<<"Enter the number: ";
    cin>>number;
    while(number > 0) {
        int lastDigit = number % 10;
        rev = rev * 10 + lastDigit;
        number = number / 10;
    }
    cout<<"The reversed number is: "<<rev<<endl;
    return 0;
}