#include<iostream>
using namespace std;
class A{
    public:
       void Say(){
            cout<<"Hello World"<<endl;

       }
};
class B:public virtual A{

};

class C:public virtual A{

};

class :public B , public C{

};







int main(){


return 0;
}