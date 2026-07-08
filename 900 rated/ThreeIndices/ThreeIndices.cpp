#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll a,b,c;
        bool flag=false;
        for(ll i=1;i<n-1;i++){
            if(v[i-1]<v[i] && v[i]>v[i+1]){
                a=i-1;b=i;c=i+1;
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}