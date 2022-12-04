#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        int no;
        for(int i=0;i<n;i++){
            cin>>no;
            s.insert(no);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}