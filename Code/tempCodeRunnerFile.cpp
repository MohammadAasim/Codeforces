#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int n;
    int count=0;
    for(int i=0;i<str.length();i++){
        for(int j=0;j<i;j++){
            if(str[i] == str[j]){
                n++;
            }
        }
        if(n==0){
            count++;
        }
        n=0;
    }
    if(count % 2 == 0){
        cout<<"IGNORE HIM!"<<endl;
    }else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}