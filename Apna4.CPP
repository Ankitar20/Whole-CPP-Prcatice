#include <iostream>
#include <cmath>
using namespace std;
// print all numbers between two given numbers
//  bool isPrime(int num){
//      for(int i=2;i<=sqrt(num);i++){
//      if(num%i==0){
//       return false;
//      }
//      }
//      return true;
//  }
//  int main(){
//  int a,b;
//  cin>>a>>b;

// for(int i=a; i<=b; i++){
//     if(isPrime(i)){
//          cout<<i<<endl;
//     }
// }
// return 0;
// }
//
// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nextterm;

//     for(int i=1;i<=n;i++){
//         cout<<t1<<endl;
//         nextterm=t1+t2;
//         t1=t2;
//         t2=nextterm;

//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
// fib(n);
// }
// Factorial number
//  int fact( int n){
//      int factorial=1;

//         for( int i=2;i<=n;i++){
//            factorial*=i;
//     }
//     return factorial;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=fact(n);
//     cout<<ans<<endl;
//     return 0;
// }
// ncr formula
//  int fact( int n){
//     int factorial=1;
//          for( int i=2;i<=n;i++){
//           factorial*=i;
//     }    return factorial;
// }
// int main(){
//     int n ,r;
//     cin>>n>>r;

//     int ans=fact(n)/(fact(r)*fact(n-r));
//     cout<<ans<<endl;
// }
// Pascal triangle
// 1
// 11
// 121
// 1331
//
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) /( fact(j) * fact(i - j)) <<" ";
        }
        cout << endl;
    }
    return 0;
    
}
