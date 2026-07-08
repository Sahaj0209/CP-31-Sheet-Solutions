#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll cnt3=0,cnt2=0;
        while(n%3==0){
            cnt3++;
            n/=3;
        }
        while(n%2==0){
            cnt2++;
            n/=2;
        }
        if(cnt2>cnt3 || n>1) cout<<-1<<endl;
        else cout<<(-cnt2+2*cnt3)<<endl;
    }
    return 0;
}