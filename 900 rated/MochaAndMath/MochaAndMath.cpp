#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> v(n);
        ll andRes;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(i==0) andRes=v[i];
            else andRes=andRes&v[i];
        }
        cout<<andRes<<endl;
    }
    return 0;
}