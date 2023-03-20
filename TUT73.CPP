#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
//map is an associative array
map< string ,int >marksMap;
marksMap["Atul"]=58;
marksMap["Rohit"]=57;
marksMap["Kishlay"]=78;
marksMap["Aditya"]=65;
marksMap["Sachin"]=53;
marksMap["Ankita"]=90;
marksMap.insert({{"Rohan",89} , {"Akshat",46}});
map<string , int>::iterator iter;
for(iter =marksMap.begin();iter !=marksMap.end(); iter++)
{
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
}
cout<<"The size is:"<<marksMap.size()<<endl;
cout<<"The max  size is:"<<marksMap.max_size()<<endl;
cout<<"The empty's return value is:"<<marksMap.size()<<endl;
return 0;
}