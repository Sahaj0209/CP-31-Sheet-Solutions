#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        if(a==b) cout<<0<<" "<<0<<endl;
        else {
        if(b>a){
            ll temp = a;
            a = b;
            b = temp;
        }
        ll g = (a-b);
        ll ans = min(b%g,g-(b%g));
        cout<<g<<" "<<ans<<endl;
    }
   }
    return 0;
}