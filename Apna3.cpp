#include<iostream>
#include<cmath>
using namespace std;
//check wheter a number is prime or not
// int main(){

// int n ;
// bool flag=0;
// cin>>n;
// for(int i=2; i<=sqrt(n); i++){
//     if(n%i==0){
//         cout<<"Non prime number";
//         flag=1;
//         break;
//     }
// }
// if(flag==0){
//     cout<<"prime"<<endl;

// }
// return 0;
// }
//Reverse a number
// int main(){
// int n;
// cin>>n;

// int reverse=0;
// while(n>0){
//    int lastdigit=n%10;
//    reverse= reverse*10 +lastdigit;
//     n=n/10;

// }
// cout<<reverse<<endl;
// }
//armstrong number 
//meaning the sum of the  cubes of that number isd equal to the number
 int main(){
     int n;
     cin>>n;


    int sum=0;
    int originaln=n;
    while(n>0){
      int lastdigit=n%10;
      sum+= pow(lastdigit,3) ;
      n=n/10;
    }
    if(sum==originaln){
     cout<<"Armostrong number"<<endl;
    }
    else{
        cout<<"not armstrong";
    }
 }