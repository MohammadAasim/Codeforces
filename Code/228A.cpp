#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int s;
    set<int>set;
    while(n--){
        cin>>s;
        set.insert(s);
    }
    int ans = 4 - set.size();
    cout<<ans<<endl;
    return 0;
}