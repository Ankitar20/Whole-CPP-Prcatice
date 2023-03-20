#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // by default it is equal to zero

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is" << id << "and this is employee number " << count << endl;
    }
    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count;

int main()
{
    Employee harry, rohan, lovish;
    // static data number  of class employee
    //   harry.id=1; it is private
    harry.setData();
    harry.getData();
    Employee::getcount();
    rohan.setData();
    rohan.getData();
    Employee::getcount();
    lovish.setData();
    lovish.getData();
    Employee::getcount();
    return 0;
}