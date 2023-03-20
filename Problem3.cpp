#include <iostream>
using namespace std;
int main()
{
    int s;
    cout << "Enter the size of array" << endl;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cout<<"Enter the numbers";
        cin>> arr[i];
    }
    for(int i=0; i<s-1;i++){
        for( int j=i+1;j<s;j++){
      cout<<"The pairs are"<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }

    return 0;
}