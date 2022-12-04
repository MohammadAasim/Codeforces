#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    str[0] = toupper(str[0]);
    cout<<str<<endl;
    return 0;
}