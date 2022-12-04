#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s = to_string(n);
    int count = 0
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7'){
            count += 1;
        }
    }
    if(count = 4 || count = 7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}