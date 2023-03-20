#include <iostream>
using namespace std;
// sieve of erathonenes-finding the prime numbers in given range
// void primeSieve(int n)
// {
//     int prime[100] = {0};

//     for (int i = 2; i <= n; i++)
//     {
//         if (prime[i] == 0)//0 means unmarked
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 prime[j] = 1;//marked
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             cout<<i<<" ";
//         }
//     }cout<<endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//   primeSieve(n);

//     return 0;
// }
// prime factorization using sieve
// if 20 is number there then the smallest prime of it is 2 again 2 and then 5 so prime factors will be(2,2,5)
// spf -smallest prime factor

void primefactor(int n)
{
    int spf[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}
    int main()
    {

        int n;
        cin >> n;

        primefactor(n);
        return 0;
    }
