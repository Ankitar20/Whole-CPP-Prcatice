#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//int a ,b,sum;
//cout<<"The sum of 29 and 30 is "<<29+30<<endl;
//int a , b;
//a=29;
//b=30;

//int sum=a+b;
//cout<<"The sum is" <<sum<<endl;
int n1=2147483648;
cout<<"overflow the integer range and set in minimum range "<<n1+1<<endl;
cout<<"Increasing it from minimum range"<<n1+2<<endl;
 cout<<"product is: "<<n1*n1<<endl;

int n2=-2147483648;
cout<<"underflow the range and set in maximum range "<<n2-1<<endl;
cout<<"Decreasing from its maximum "<<n2-2<<endl;
cout<<"product is :"<<n2*n2<<endl;


return 0;
}