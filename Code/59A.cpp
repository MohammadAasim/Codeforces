#include <bits/stdc++.h>
using namespace std;
void count(string str){
    int upper=0;
    int lower=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            upper++;
        }else if(str[i]>='a' && str[i]<='z'){
            lower++;
        }else{
            continue;
        }
    }
    if(upper>lower){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout<<str<<endl;
    }else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str<<endl;
    }
}
int main()
{
    string str;
    getline(cin,str);

    count(str);

    return 0;
}