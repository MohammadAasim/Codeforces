#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    int even=0,odd=0;
    int idxeven=0,idxodd=0;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
            idxeven=i;
        }else{
            odd++;
            idxodd=i;
        }
    }
    if(even>odd){
        cout<<idxodd<<endl;
    }else{
        cout<<idxeven<<endl;
    }
    return 0;
}