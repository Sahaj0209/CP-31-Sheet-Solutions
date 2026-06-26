#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        vector<int> v(26,0);
        for(int i=0;i<t.size();i++){
            v[t[i]-'A']++;
        }
        for(int i=s.size()-1;i>=0;i--){
            if(v[s[i]-'A']>0){
                v[s[i]-'A']--;
            } else {
                s[i]='.';
            }
        }
        string newStr="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='.'){
                newStr+=s[i];
            }
        }
        if(newStr==t){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}