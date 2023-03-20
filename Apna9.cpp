// #include <iostream>
// using namespace std;
// // character array-it is the array of characters in ewhuch the size of array is n+1
// int main()
// {
//     // char arr[100]="apple";
//     // int i=0;
//     // while(arr[i]!='\0'){
//     //    cout<<arr[i]<<endl;
//     //    i++;
//     // }
//     // If we want to take input from uder then
//     // char arr[100];
//     // cin>>arr;
//     // cout<<arr;
//     // Check palindrom or not
//     // Check ankita is palindrome or not
//     int n;
//     cin >> n;

//     char arr[n + 1];
//     cin >> arr;

//     bool check = 1;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] !=arr[n - 1 - i])
//         {
//             check = 0;
//             break;
//         }
//     }
//     if (check = true)
//         cout << "Word is palindrome";
//     else
//     {
//         cout << "Word is not palindrome";
//     }
//     return 0;
//}
#include <iostream>
using namespace std;
int main()
{
    // largest word in palindrome

    int n;
    cin >> n;
    cin.ignore();
    char arr(n + 1);

    cin.getline[arr, n];
    cin.ignore();

    int i = 0;
    int currLen = 0;
    int maxLen = 0;

    while(1)
        
        {
            if (arr[i] == ' ' || arr[i] == '\0')
            {
                if (currLen > maxLen)
                {
                    maxLen = currLen;
                }
                currLen=0;
            }

            currLen++;
            if (arr[i] == '\0')
                break;

            i++;
        }
        
           cout << maxLen << endl;

          return 0;
}
