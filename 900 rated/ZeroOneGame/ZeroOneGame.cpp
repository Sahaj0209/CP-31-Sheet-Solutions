#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll oneCnt=0,zeroCnt=0;
        string s;cin>>s;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0') zeroCnt++;
            if(s[i]=='1') oneCnt++;
        }
        ll ans = min(zeroCnt,oneCnt);
        if(ans%2==0){
            cout<<"NET"<<endl;
        } else {
            cout<<"DA"<<endl;
        }
    }
    return 0;
}