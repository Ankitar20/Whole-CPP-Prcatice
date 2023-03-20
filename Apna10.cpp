#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
// {

//     string str = "abcdefghijklmnop";

//     // convert into upper case
//     for (int i = 0; i < str.size(); i++)
//     {
//        // if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] -= 32;
//     }
//     cout << str << endl;
//     // convert lower case
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//             str[i] += 32;
//     }
//     cout << str << endl;
//     return 0;
// }
// string s ="abcdeghtisgherysdfh";

// transform(s.begin() , s.end() , s.begin() ,::toupper);
// cout<<s<<endl;

// transform(s.begin() , s.end(), s.begin(),::tolower);
// cout<<s<<endl;
// }
// 
string s="fghsdjeiusl";
int freq[26];

for(int i=0;i<26;i++)
freq[i]=0;

for(int i=0;i<s.size();i++)
freq[s[i]-'a']++;

char ans='a';
int mazxF=0;

for(int i=0;i<26;i)


return 0;
}