#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        vector<ll> v(n);
        ll noEven=0;
        ll absDiff=INT16_MAX,minAbsDiff=INT16_MAX;
        for(ll i=0;i<n;i++){
            cin>>v[i];        
            if(v[i]%2==0) noEven++;
            if(v[i]%k==0) minAbsDiff=0;
            absDiff=(k-(v[i]%k));
            minAbsDiff=min(absDiff,minAbsDiff);
        }
        if(k==4){
            if(noEven==0) minAbsDiff=min(minAbsDiff,2LL);
            else if(noEven==1) minAbsDiff=min(minAbsDiff,1LL);
            else if(noEven>11=2) minAbsDiff=min(minAbsDiff,0LL);
        }
        cout<<minAbsDiff<<endl;
    }
    return 0;
}