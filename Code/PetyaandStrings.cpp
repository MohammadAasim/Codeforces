#include <bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    bool flag=false;
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for(int i=0;i<s1.size();i++){
        if(s1[i]<s2[i]){
            cout<<-1<<endl;
            flag=true;
            break;
        }else if (s1[i]>s2[i]){
            cout<<1<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<0<<endl;
    }
    return 0;
}