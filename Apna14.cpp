#include <iostream>
using namespace std;
// recursion
//   int sum(int n){
//       if (n==0)
//       {
//          return 0;
//       }
//       int prevSum=sum(n-1);
//       return n+sum(n-1);

//  }

// int main(){
//   int n;
//   cin>>n;
//   cout<<sum(4);
//   return 0;
// }
// power of n raise to p using recursion
// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     int prevpower = power(n, p - 1);
//     return n * prevpower;
// }
// int main()
// {
//     int n, p;
//     cin >> n >> p;
//     cout << power(n, p);
//     return 0;
// }
//factorial of n using  recursion
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//   int prevfact=factorial(n-1);
//   return n*prevfact;

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(4);
//     return 0;
// }
//fibonnaci seris upto n number
int fib(int n){
    if(n==0){
        return 0;

    }
    if(n==1){
        return 1;
    }
    return fib(n-1) +fib(n-2);

}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}