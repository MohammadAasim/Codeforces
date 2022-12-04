#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int f=k*l;
    int t=f/nl;
    int lime=c*d;
    int salt=p/np;
    cout<<min(t,min(lime,salt))/n<<endl;
    return 0;
}