#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    //10 2
    cin>>n>>m;
    if(m>n){
        cout<<-1<<endl;
    }else{
        cout << (n + (2 * m) - 1) / 2 / m * m<<endl;
    }
    return 0;
}