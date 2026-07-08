#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll len = n*k;
        vector<ll> v(len);
        for(ll i=0;i<len;i++){
            cin>>v[i];
        }
        ll pointer = len;
        ll sum = 0;
        while(k--){
            pointer-=(n/2 + 1);
            sum+=v[pointer];
        }
        cout<<sum<<endl;
    }
    return 0;
}