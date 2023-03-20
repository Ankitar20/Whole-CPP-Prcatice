#include<iostream>
#include<vector>
//vector<data_type> vector_name;
using namespace std;

void display(vector<int> &v){
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"";
        cout<<endl;

    }
    
}
int main(){
    vector<int>vec1;
    int element , size;
    cout<<"Enter the size of your vector "<<endl;
    cin>>size;
    for(int i= 0; i<size; i++){
        cout<<"Enter an element to add to this vector :";
        cin>>element;
        vec1.push_back(element);
    }
   // display(vec1);
   // vec1.pop_back();
   // display(vec1);
 display(vec1);
vector<int>:: iterator iter =vec1.begin();
vec1.insert(iter ,5, 566);
display(vec1);
vector <char> vec2(4);
vector<char> vec3(vec2);
vector<int> vec4(6,3);
    return 0;

}
