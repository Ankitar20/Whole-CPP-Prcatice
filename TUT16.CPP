#include<iostream>
using namespace std;
int sum (int a , int b){
    int c = a+b;
    return c;
}
void swap(int a , int b){//temp a , b
    int temp = a;//4, 4,5
    a=b;//4,5,5
    b=temp;//4,5,4
}
//call by value 
void swapPointer(int* a , int* b){
    int temp = *a;
    *a=*b;
   * b=temp;
}
//call by refrence
void swapRefrenceVar(int  &a , int &b){//temp a , b
    int temp = a;//4, 4,5
    a=b;//4,5,5
    b=temp;//4,5,4
}



int main(){
     int x=4, y=5;
    // cout<<"The sum of 4 & 5 is"<<sum(a, b);
     cout<<"The value of x is "<<x<<"and the value of y is"<<y<<endl;
    // swapPointer(&x,&y);
    // swap(x,y);
    swapRefrenceVar(x,y);
     cout<<"The value of x is "<<x<<"and the value of y is"<<y<<endl; 
return 0;

}