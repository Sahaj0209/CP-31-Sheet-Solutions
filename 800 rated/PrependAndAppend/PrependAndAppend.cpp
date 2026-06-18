#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a =0,b=n-1;
        int len=n;
        while(a<b){
            if(s[a]=='1' && s[b]=='0') {
                len-=2;
                a++;
                b--;
            }
            else if(s[a]=='0' && s[b]=='1')  {
                len-=2;
                a++;
                b--;
            }
            else break;
        }
        cout<<len<<endl;
    }
    return 0;
}