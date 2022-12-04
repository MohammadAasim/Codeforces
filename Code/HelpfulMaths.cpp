#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
//3+2+1
//1+2+3
{
    string s;
    cin>>s;
    s.erase(remove(s.begin(), s.end(), '+'), s.end());
    sort(s.begin(), s.end());
    for(int i=0;i<s.size()-1;i++){
        cout<<s[i]<<"+";
    }
    cout<<s[s.size()-1];
    return 0;
}