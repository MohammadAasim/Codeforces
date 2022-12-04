#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
void yes(){
    string s;
    cin>>s;
    if(s=="YES" || s=="YeS" || s=="yEs" || s=="yES" || s=="yes" || s=="Yes"){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        yes();
    }
    return 0;
}