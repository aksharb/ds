#include<iostream>
using namespace std;
class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) { //setter
        Name = name;
    }
    string getName() { //getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }
    void IntroduceYourself()
    {
        cout<<"Name: "<< Name << endl;
        cout<<"Company: "<< Company << endl;
        cout<<"Age: "<< Age << endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee employee1 = Employee("Akshar", "Solar", 23);
    employee1.IntroduceYourself();
    Employee employee2 = Employee("John", "Amazon", 45);
    employee2.IntroduceYourself();
    employee1.setAge(49);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;
}
