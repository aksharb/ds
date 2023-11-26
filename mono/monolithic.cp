#include<iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
void initialise(int l, int b)
    {
    length = l;
    breadth = b;
    }
int area()
{
    return length*breadth;
}
int perimeter()
{
    return 2 * (length * breadth);
}

};
int main()
{
    Rectangle r;
    int l,b;
    cout<<"Enter the length and breadth:\n";
    cin>>l>>b;
    r.initialise(l,b);
    int a = r.area();
    int peri = r.perimeter();
    cout<<"The area is: "<<a<<" and the perimeter is: "<<peri;
    return 0;
}
