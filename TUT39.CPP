#include<iostream>
using namespace std;
// Protected Access Modifiers in CPP
/*
protected members are like private but they can be inherited 

                    Public Derivation      Private Derivation     protected Derivation
private members      not  inherited            not  inherited           not  inherited
protected members      protected                private                   protected
public members            public                 private                     protected
 */
class Base{
    protected:
      int a ;
  private:
       int b;
};
class Derived:protected Base{
//here we cannot acces the int a because it is protected eventhough we declare it publically we cannot access the protected member of another class
};



int main(){
    Base b;
    Derived d;
  // cout<<d.a;  will not work because here the int a is protected in both base and derived classso. we cannot access

return 0;
}