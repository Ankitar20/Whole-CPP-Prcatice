//sorting
#include<iostream>
using namespace std;
//check the array is sorted or not
// bool sorted (int arr[] , int n){
//     if(n==1){
//    return true;

//     }
//     bool restArray =sorted(arr+1,n-1);
//     return (arr[0]<arr[1] &&restArray);
// }
// int main(){
//     int arr[]={1,6,3,4,5};
//     cout<<sorted(arr,5);


// return 0;
// }
//print numbers till n
// in decreasing order
// void dec(int n){
//    if(n==0)
//    {
//        return ;

//    }
//    cout<<n<<endl;
//    dec(n-1);
// }
// void inc(int n){
//       if(n==1)
//    {
//        cout<<"1"<<endl;
//        return ;

//    }
//     inc(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;

//     dec(n);
//     inc(n);
// }
//finding the first and last occurance of the element in the array
int firstocc(int arr[] , int n, int i,int key )
{
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;

    }
    return  firstocc(arr,n,i+1,key);
}
int lastocc( int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArray=lastocc(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;

    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
      int arr[]={4,2,1,2,5,2,7};
      cout<<firstocc(arr,7,0,2)<<endl;
      cout<<lastocc(arr,7,0,2);
      return 0;
}






















