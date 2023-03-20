#include <iostream>
using namespace std;
//int sum (int a, int b)
int sum( int , int);
void g();

int main()
{
    int num1, num2;
    cout << "The value of num 1" << endl;
    cin >> num1;
    cout << "The value of num 2" << endl;
    cin >> num2;
    cout << "The sum of num1 and num2 is" << sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void g(){
    cout<<"\n Hello , Good Morning";
}