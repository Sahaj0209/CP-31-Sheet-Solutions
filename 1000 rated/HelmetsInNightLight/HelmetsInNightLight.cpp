#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,p;cin>>n>>p;
        vector<pair<ll , ll>> v(n);
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        for(ll i=0;i<n;i++){
            v[i]={b[i],a[i]};
        }
        sort(v.begin(),v.end());
        ll minCost=p,shared=1;
        for(auto it : v){
            ll canShared = it.second;
            ll sharingCost = it.first;
            if(sharingCost>=p) break;
            if(shared+canShared>n){
                minCost+=((n-shared)*sharingCost);
                shared=n;
            } else {
                minCost+=canShared*sharingCost;
                shared+=canShared;
            }
        }
        minCost+=(n-shared)*p;
        cout<<minCost<<endl;
    }
    return 0;
}