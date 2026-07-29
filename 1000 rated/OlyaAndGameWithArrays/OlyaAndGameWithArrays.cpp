#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll sum=0,minFirst=INT_MAX,minSecond=INT_MAX;
        while(n--){
            ll x;cin>>x;
            vector<ll> v(x);
            for(ll i=0;i<x;i++){
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            sum+=v[1];
            minSecond=min(minSecond,v[1]);
            minFirst=min(minFirst,v[0]);
        }
        sum=sum-minSecond+minFirst;
        cout<<sum<<endl;
    }
    return 0;
}