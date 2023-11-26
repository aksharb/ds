#include<iostream>
using namespace std;
int main()
{
    int length = 0, breadth = 0;
    cout<<"Enter length and breadth\n";
    cin>>length>>breadth;
    int area = length * breadth;
    int peri = 2 * (length + breadth);
    cout<<"The area is "<<area<<"and the perimeter is "<<peri;
    return 0;
}
