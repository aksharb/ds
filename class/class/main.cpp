#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle() //default constructor
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b) //parameterized constructor
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l) //mutated function
    {
        length = l;
    }
    void setBreadth(int b) //mutated function
    {
        breadth = b;
    }
    int getLength() //accessor function
    {
        return length;
    }
    int getBreadth() //accessor function
    {
        return breadth;
    }
    ~Rectangle()
    {
        cout<<"Destructor called\n";
    }
};
int main() {
    //Rectangle r(10,5);
    Rectangle r;
    int l,b;
    cout<<"Enter the length and breadth:\n";
    cin>>l>>b;
    r.setLength(l);
    r.setBreadth(b);
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;
    return 0;
}
