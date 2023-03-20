#include<iostream>
using namespace std;
//copy constructurs
//these are also provided by comiler too if the copy constructor is not defined in the class then compiler also gives a defalut copy consructor for each class
class Number{
    int a;
    public:
       Number()  {
           a=0;
             }
             Number(int num){
                 a= num;

             }
            Number (Number &obj){
             cout<<"Copy constructor called !!!"<<endl;
                a=obj.a;
            }




             void display(){
                 cout<<"The number for this object is "<<a<<endl;

             }

};
int main(){
Number x,y, z(45) , z2;
x.display();
y.display();
z.display();


Number z1(x);//copy constructor invoked
z1.display() ;

z2=z;//copy constructor not  invoked bcoz z2 is declared before
z2.display();

Number z3=z;//copy constructor invoked because  z3 is made new in this line no is made new and not declared before
z3. display();

return 0;
}