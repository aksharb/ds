#include<iostream>
using namespace std;
class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        cout<<"Name: "<< Name << endl;
        cout<<"Company: "<< Company << endl;
        cout<<"Age: "<< Age << endl;
    }
};
int main()
{
    Employee employee1;
    employee1.Name = "Akshar";
    employee1.Company = "Solar";
    employee1.Age = 23;
    employee1.IntroduceYourself();
    Employee employee2;
    employee2.Name = "John";
    employee2.Company = "Lunar";
    employee2.Age = 34;
    employee2.IntroduceYourself();
}
