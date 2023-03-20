#include<iostream>
using namespace std;
//pointers to objects and arrow operator in cpp
/*class Complex {
    int real , imaginary;
    public:
       void getData(){
           cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary  part is "<<imaginary<<endl;

       }
          void setData(int a, int b ){
        real= a;
        imaginary=b;

            
       }
};

int main(){
Complex*ptr=new Complex;
 (*ptr).setData(1,54);
 (*ptr).getData();


return 0;
}
#include<iostream>
using namespace std;
//pointers to objects and arrow operator in cpp
*/
class Complex {
    int real , imaginary;
    public:
       void getData(){
           cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary  part is "<<imaginary<<endl;

       }
          void setData(int a, int b ){
        real= a;
        imaginary=b;

            
       }
};

int main(){
Complex*ptr=new Complex;
 ptr->setData(1,54);
 ptr->getData();

// Array of objects 
Complex *ptr1=new Complex[4];
ptr1->setData(1,4);
ptr->getData();
return 0;
}