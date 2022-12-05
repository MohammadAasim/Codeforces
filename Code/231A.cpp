#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;//for test cases
    cin>>t;
    int count=0;//to store the count of the question to attempt
    while(t--){
        int a,b,c;//to store result on test case to 3 friend ans
        cin>>a>>b>>c;
        if(a+b==2 || b+c==2 || a+c==2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}