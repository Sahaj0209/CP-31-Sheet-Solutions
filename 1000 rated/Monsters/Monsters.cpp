#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        vector<pair<ll,ll>> a(n);
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            a[i]={temp,i+1};
        }
        for(ll i=0;i<n;i++){
            a[i].first=a[i].first%k;
            if(a[i].first==0) a[i].first=k;
        }
        sort(a.begin(),a.end(),[&](pair<ll,ll>x,pair<ll,ll>y){
            if(x.first!=y.first){
                return x.first>y.first;
            }
            return x.second<y.second;
        });
        for(auto it:a){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}