#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]!=s[s.size()-1]){
            if(s[0]='b'){
                s[0]='a';
            } else {
                s[0]='b';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}