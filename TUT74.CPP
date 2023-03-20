#include<iostream>
#include<functional>
#include<algorithm>
//sort (address of first element , address of last element );
//syntax for sort algorithm   
//and let's just sort from the beginning to the 5th element  
//and run a loop to see the resultant array

using namespace std;
int main(){
//Function Objects (Fuctor): A function wrapped in a class so that it is available 
//like an object 


int arr[]={1,73, 4, 2, 54, 7};
//descending order syntax
sort(arr , arr+6 , greater<int>());
//ascending order
//sort(arr,arr+5);
for(int i=0 ; i<6; i++)
{
    cout<<arr[i]<<endl;

}


return 0;
}
//This is the end of cpp........let;s continue to problem solving