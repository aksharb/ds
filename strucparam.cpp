//C++ code to pass structure as parameter
#include<iostream>
using namespace std;
struct Rectangle
{
    int length, breadth;
};
void changeLength(struct Rectangle *p, int l)
{
    p->length = l;
}
int main()
{
    struct Rectangle r = {10,5};
    changeLength(&r,10);
    cout<<"The new length is: "<<r.length;
}
