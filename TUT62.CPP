#include <iostream>
using namespace std;
int target;
bool arrsum(int arr[], int targrt, int n)
{

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {

                cout << "Pair with a given sum " << target << "is ( " << arr[i] << " , " << arr[j] << ")"
                     << endl;

                return 1;
            }
        }
    }
    return 0;
}

int main(void)
{
    int arr[] = {0, 5, 2, 7, 1};
    int target = 6;
    int size = sizeof(arr) / sizeof(arr[0]);

    if (arrsum(arr, size, target))
    {
        cout << "Valid pair exists"<< endl;
    }
    else
    {
        cout << "No valid pair exists for " << target << endl ;
    }
    return 0;
    
}
