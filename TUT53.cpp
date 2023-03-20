#include<iostream>
using namespace std;
//this poiter 
//this pointer is a pointer which points to the object which call member function
/*class A{
    int a;
    public:
       void setData(int a){
           this->a=a;

       }
       void getData(){
           cout<<"The value of a is "<<a<<endl;
       }
    
};
*/
class A{
    int a;
    public:
        A & setData(int a){
           this->a=a;
           return*this;
       }
       void getData(){
           cout<<"The value of a is "<<a<<endl;
       }
    
};
int main(){
A a;
a.setData(5).getData();

return 0;
}