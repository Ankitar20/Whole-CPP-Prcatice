#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of of a is " << a << endl;
        cout << "The value of of b is " << b << endl;
        cout << "The value of of c is " << c << endl;
        cout << "The value of of d is " << d << endl;
        cout << "The value of of e is " << e << endl;
    }
};
void Employee ::setData(int a1 , int b1, int c1){
a=a1;
b=b1;
c=c1;
}


int main()
{
Employee harry;
harry.d = 793;
harry.e=167;
harry.setData(2,4,5);
harry.getData();

    return 0;
}