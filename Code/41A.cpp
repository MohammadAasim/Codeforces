#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string str = s1;
    reverse(str.begin(),str.end());
    if(str==s2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}