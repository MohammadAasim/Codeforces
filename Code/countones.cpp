#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int solved(int n,int arr[],int k,int m){
    int count=0;
    for(int i=0;i<=n-k;i++){
        int ones_in_subarray=0;
        for(int j=i;j<i+k;j++){
            if(arr[j]==1){
                ones_in_subarray = ones_in_subarray + 1;
            }
        }
        if(ones_in_subarray==m){
            count = count + 1;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solved(n,arr,k,m);
    }
    return 0;
}