#include <bits/stdc++.h>
using namespace std;
int main ()
{   string s;
    cin >> s;
    vector<char>v;
    for(char c ='a';c<='z';c++){
        if(count(s.begin(),s.end(),c)>0){
            v.push_back(c);
        }
    }
   for(char c: v){
    cout <<c << " "<<":"<<" "<<count(s.begin(),s.end(),c)<<endl;
   }
return 0;
}