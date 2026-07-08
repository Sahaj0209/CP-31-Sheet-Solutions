#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll n,ll m){
    if(m==0) return 1;
    ll pow = 1;
    while(m--){
        pow*=n;
    }
    return pow;
}
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> v(n);
        ll c0=0,c1=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0) c0++;
            if(v[i]==1) c1++;
        }
        ll ans = power(2,c0);
        ans=ans*c1;
        cout<<ans<<endl;
    }
    return 0;
}