//C++ program to pass rectangle's values by address
#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
void area(Rectangle *p, int *ar)
{
    *ar = p->length * p->breadth;
}
int main()
{
    Rectangle r={12,3};
    int ar;
    area(&r, &ar);
    cout<<"The area of rectangle is "<<ar;
}
