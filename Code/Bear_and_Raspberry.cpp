#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t=0;
    for(int i=0;i<n-1;i++){
        t=max(t,arr[i]-arr[i+1]-c);
    }
    cout<<t<<endl;
    return 0;
}
