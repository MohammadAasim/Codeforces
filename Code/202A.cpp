#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;
    int len = s.size();
    int i,j;
    int str[27];
    for(i=1;i<=26;i++){
        str[i] = 0;
    }
    for(i=0;i<len;i++){
        str[int(s[i])-96]++;
    }
    for(i=26;i>=1;i--){
        if(str[i]>0){
            for(j=0;j<str[i];j++){
                cout<<char(96+i);
            }
            exit(0);
        }
    }
    return 0;
}