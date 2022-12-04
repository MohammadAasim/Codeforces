#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int count(0);
    while(n--){
        int lucky(0);
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(str[i]=='4' || str[i]=='7'){
                lucky += 1;
            }
        }
        if(lucky <= k){
            count += 1;
        }
    }
    cout<<count<<endl;
    return 0;
}