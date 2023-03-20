#include<iostream>
using namespace std;
// using default arguments with constructors
class simple{
   int data1;
   int data2;
     public:
        simple( int a , int b=9){
            data1=a;
            data2=b;

        }
        

        void printNumber(){
            cout<<"The value of data1 and data2 is "<<data1<<"and "<< data2<<endl;
        }

};



int main(){
//simple s1(5);//now it will print default value of b=9
simple s1(5,4);
s1.printNumber();
simple s2(3,4);
s2.printNumber();
return 0;
}