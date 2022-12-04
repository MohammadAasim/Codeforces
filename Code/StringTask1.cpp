#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s,str;
    cin>>s;
    int x=s.length();
    for(int i=0;i<x;i++){
        if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i] =='y' || s[i]=='u' || s[i]=='e' || s[i]=='A' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='E' || s[i]=='Y'){
            continue;
        }else{
            str+='.';
            str+=tolower(s[i]);
        }
    }
    cout<<str<<endl;
return 0;
}