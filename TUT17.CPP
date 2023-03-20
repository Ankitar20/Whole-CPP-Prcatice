#include<iostream>
using namespace std;

 inline int product (int a , int b){
     return a*b;
 }
float moneyReceived(int currentmoney , float factor =1.04){
    return currentmoney * factor;

}

int main(){
    int a , b;
    int money =100000;
  cout<<"If you have "<<money<<"Rs in your bank account , you will recive"<<moneyReceived(money)<<"Rs after 1 year "<<endl;
  cout<<"For VIP:If you have money  "<<money<<"Rs in your bank account , you will recive"<<moneyReceived(money , 1.1)<<"Rs after 1 year "<<endl;
  





return 0;
}