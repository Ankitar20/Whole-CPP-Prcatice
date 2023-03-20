#include <iostream>
using namespace std;
// some more problems on recursion in string
// reverse a string using recursion

// void reverse(string s)
// {

//     if (s.length() == 0)
//     {
//         return;
//     }
//     string ros = s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }
// int main()
// {
//   reverse("binod");

//     return 0;
// }
// q2.replace pi with 3.14 using recursion
// void replacePi(string s)
// {
//     if (s.length() == 0)
//     { // base case
//         return;
//     }
//     if (s[0] == 'p' && s[1] == 'i')
//     {
//         cout << "3.14";
//         replacePi(s.substr(2));
//     }
//     else
//     {
//         cout << s[0];
//         replacePi(s.substr(1));
//     }
// }
// int main()
// {
//     replacePi("pippppiiiipi");
//     return 0;
// }
//Tower of hanoi

#include<iostream>
using namespace std;


// void towerofHanoi(int n,char src , char dest , char helper){
//   if(n==0){//base case
//       return ;
//   }
//     towerofHanoi(n-1,src,helper,dest);
//     cout<<"Move from "<<src<<" to "<<dest<<endl;
//     towerofHanoi(n-1,helper,dest,src);

// }
// int main(){
//   towerofHanoi(3,'A','C','B');
// return 0;
// }
//remove all duplicates from the string
 string removeDup(string s){
     if(s.length()==0){
         return "";

     }
     char ch=s[0];
     string ans= removeDup(s.substr(1));
     if(ch==ans[0]){
         return ans;

     }
     return (ch+ans);

 }

int main(){
cout<<removeDup("aaaabbbbeeecddd")<<endl;
return 0;

}