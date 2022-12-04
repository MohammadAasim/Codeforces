#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s1;
    set<int>s2;
    set<int>s3;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<0){
            s1.insert(a);
        }else if(a>0){
            s2.insert(a);
        }else{
            s3.insert(a);
        }
    }
    for (auto it = s1.begin(); it != s1.end(); it++){
        cout << *it << " ";
    }
    return 0;
}