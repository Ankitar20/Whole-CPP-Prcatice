#include<iostream>
using namespace std;
 int sum(int a, int b)
 {
    cout<<" using function with  2 arguments"<<endl;
     return a+b;
 }
 int sum (int a , int b, int c){
     cout<<" using function with  3  arguments"<<endl;
     return a+b+c;
 }

 // Calculate the volume of Cylinder
 int volume ( double r , int h)
 {
     return (3.14*r*r*h);
 }
 // Calculate the volume of Cube
 int volume ( int a)
 {
     return (a*a*a);
 }
// Calculate the rectangular box
 int volume ( int l, int b, int h)
 {
     return (l*b*h);
 }
 int main()
 {
     cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
     cout<<"The sum of 3, 6 and 5 is "<<sum(3,6,5)<<endl;
     cout<<"The volume of cylinder of radius 3 &height is 4 is "<<volume(3,4)<<endl;
     cout<<"The volume of cube of  side 3 is "<<volume(3)<<endl; 
     cout<<"The volume of Rectangular box  of length 2, breadth 5, height 6 is "<<volume(2,5,6)<<endl;
 }