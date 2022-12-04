#include <bits/stdc++.h>
using namespace std;
int solved(){
    int n;
    cin>>n;
    int arr[n];
    int cp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cp[i]=arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(cp[i]==arr[n-1]){
            cout<<cp[i]-arr[n-2]<<" ";
        }
        else{
            cout<<cp[i]-arr[n-1]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solved();
    }
    return 0;
}   