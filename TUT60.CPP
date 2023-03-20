#include <iostream>
using namespace std;
int main()
{
    int size;
    printf("Enter the size of array");
    cin >> size;
    int arr[size];
    for (int i = 0; i <= size - 1; i++)
    {
        printf("Enter a number");
        cin >> arr[i];
    }

    int sum = 10;
    for (int i = 0; i <size-1; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "("<<arr[i]<<","<<arr[j]<<")";
            }
        }
    }
}