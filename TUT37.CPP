#include <iostream>
using namespace std;
// Inheritance Syntax

// Derived class syntax
/* class{{derived class name}}:{{visibility mode}}{{base -class -name}}
{
   class members/metods/etc..
}*/
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
Employee(){}
};
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{

    Employee Harry(1), Rohan(2);
    cout << Harry.salary << endl;
    cout << Rohan.salary << endl;
    Programmer SkillF(10);
    cout << SkillF.languageCode << endl;
    cout << SkillF.id << endl;
    SkillF.getData();
    return 0;
}