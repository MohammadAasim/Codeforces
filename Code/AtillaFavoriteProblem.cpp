#include <bits/stdc++.h>
using namespace std;
void solved(char str[], int n){
    char maxChar = str[1];
    for(int i = 1; i <= n; i++){
        if (str[i] > maxChar){
            maxChar = str[i];
        }    
    }
    int ans = int(maxChar)-96;
    cout<<ans<<endl;        
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char str[1000];
        for(int i=1;i<=n;i++){
            cin>>str[i];
        }
        solved(str,n);
    }
    return 0;
}   