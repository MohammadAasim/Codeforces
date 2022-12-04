#include <bits/stdc++.h>
using namespace std;
int main()
{
    //734A
    int n;
    cin>>n;
    char str[n];
    int A=0;
    int D=0;
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i]=='A'){
            A++;
        }
        if(str[i]=='D'){
            D++;
        }
    }
    if(A>D){
        cout<<"Anton"<<endl;
    }else if(A<D){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}