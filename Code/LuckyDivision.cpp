#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[13]={4,7,44,47,74,77,444,447,477,474,744,777,774};
    bool isTrue=false;
    for(int i=0;i<13;i++){
        if(n%arr[i]==0){
            isTrue=true;
            break;
        }
    }
    if(isTrue){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}