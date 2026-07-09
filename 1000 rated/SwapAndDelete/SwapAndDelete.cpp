#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll cnt1=0,cnt0=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0') cnt0++;
            if(s[i]=='1') cnt1++; 
        }
        ll tlen=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='1' && cnt0>0) {
                tlen++;cnt0--;
            }
            else if(s[i]=='0' && cnt1>0){
                tlen++;cnt1--;
            }
            else break;
        }
        cout<<(s.size()-tlen)<<endl;
    }
    return 0;
}