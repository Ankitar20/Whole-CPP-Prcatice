#include<iostream>
using namespace std;
//sorting in arrays is nothing but to arrange elements in ascending order
//selection sort:find the minimum element in an  unsorted array and swap it with the first element
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++ ){
//       cin>>arr[i];
//     }
   //selection sort 
//     for( int i=0;i<n-1;i++){
//         for( int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//             int temp=arr[j];
//              arr[j]=arr[i];
//              arr[i]=temp;
//             }   
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
// }
//Bubble sort:repeatedly seap two elements if they both are not in the correct order
//it is called bubble sort because the largest element come outside like a bubble
//if their are n numbers then we will get a sorted array in n-1 iteration
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++ ){
//       cin>>arr[i];
//     }
//     int counter=1;
//     while(counter<n-1){
//         for( int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                int  temp=arr[i];
//                arr[i]=arr[i+1];
//                arr[i+1]=temp;
//  }
//         }
//         counter++;
//     }
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }cout<<endl;
// }
//insertion sort:inserting a element from unsorted array to its correct position in sorted a
//choose first elemnt naturally
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  for(int i=1;i<n;i++){
      int current=arr[i];
      int j=i-1;
      while(arr[j]>current && j>=0){
          arr[j+1]=arr[j];
          j--;
      }
     arr[j+1]=current;
  }
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }cout<<endl;
}
