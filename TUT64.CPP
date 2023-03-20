#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*opening a file with a member function open 
int main(){
//declaring an object of the stram type 
ofstream out;
// connecting the  object out to the text file using the member function open()
  out.open("sample 61.txt");

  // writing to the file 
  out<<"this is me\n";
out<<"This is also me \n";
//closing the file connection 
out.close();

return 0;
}
*/
int main(){
 ifstream in;
 string st;
 in.open ("sample 61.txt");
 while(in.eof()==0){//giving output the string lines by storing in st until the file reaches the end of it

     // using getline to fill the whole lines in st 
     getline(in,st);
     cout<<st<<endl;
 }
  return 0;

}