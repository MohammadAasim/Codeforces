#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,d,songs,sum=0;;
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>songs;
        sum+=songs;
    }
    if(sum+(n-1)*10>d){
        cout<<-1<<endl;
        return 0;
    }
    else{
        cout<<(d-sum)/5<<endl;
    }
}