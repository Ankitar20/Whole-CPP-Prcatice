#include<iostream>
#include<fstream>
using namespace std;
//Writing Operation 
//we can open the file by using constructor or by member function  open()
/*int main(){
 string st ="Hello Harry";
 //opening files using constructor and writing it
 ofstream out("sample 61.txt");
 out<<st;
return 0;
}
*/
int main (){
    string st;
    //opening files using constructor and reading it 
    ifstream in("sample 61.txt");
    in>>st;
    getline( in ,st);
    cout<<st;

}