#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){ 
    return (a < b); 
} 
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int p=a+(b*c);
    int q=a*(b+c);
    int r=a*b*c;
    int s=(a+b)*c;
    int t=a+b+c;
    cout<<max({p,q,r,s,t},comp);
    return 0;
}