#include<iostream>
using namespace std;
//Array of objects using pointers in cpp
class ShopItem
{
    int id;
     int price;
     
     public:
     int Temp;
        void setData(int a , float b){
            id=a;
            price=b;

        }
        void getData(){
            cout<<" ID of this item "<<id<<endl;
            cout<<"The price of this item "<<price<<endl;

        }
};




int main(){
int size =3;
ShopItem*ptr=new ShopItem [size];
ShopItem*ptrTemp=ptr;
int p , i;
float q;
 for(i=0; i<size;i++){
     cout<<"Enter Id and price of item"<<i+1<<endl;
     cin>>p>>q;
     //(*ptr).setData(p,q);

     ptr->setData(p,q);
     ptr++;

 }
 for (i=0 ; i<size ; i++){
     cout<<"Item number :"<<i+1<<endl;
     ptrTemp->getData();
     ptrTemp++;

 }

return 0;
}