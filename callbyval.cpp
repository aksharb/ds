//C++ program to pass struture's parameters as call by value
#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
void area(Rectangle r)
{
    int ar = r.length * r.breadth;
    cout<<"The area is: "<<ar;
}
int main()
{
    Rectangle r = {20,30};
    area(r);
}
