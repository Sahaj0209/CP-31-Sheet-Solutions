#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,x;cin>>n>>x;
        vector<ll> v(n);
        ll minAns=0,maxAns=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            maxAns+=ceil(v[i]*1.0/x);
            minAns+=v[i];
        }
        minAns=ceil(minAns*1.0/x);
        cout<<minAns<<" "<<maxAns<<endl;
    }
    return 0;
}