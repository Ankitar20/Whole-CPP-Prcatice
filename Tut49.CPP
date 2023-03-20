#include<iostream>
using namespace std;
/*syntax for initialization list in constructor :
Constructor (argument -list ): initialzation section
{
    assignment +other code ;
     
}
*/
class Test {
    int a;
    int b;
  
    public:
        Test(int i , int j): a(i), b(a+j){
            cout<<"Constructor executed "<<endl;
             cout<<"Value of a is "<<a<<endl;
             cout<<"Value of b is "<<b<<endl;

        }

};

int main(){
    Test t(4,10);

return 0;
}
