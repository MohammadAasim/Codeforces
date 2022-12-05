#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    int count=0;
    for(a=0;a<=sqrt(n);a++){
        b=n-a*a;
        if((a+(b*b))==m){
            count++;
        }
    }
    cout<<count;
    return 0;
}
//CodeWithAasim