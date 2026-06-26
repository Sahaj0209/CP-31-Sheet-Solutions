#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<long long,long long> mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
        }
        long long currHighfreq=0;
        for(auto i:mp){
            currHighfreq=max(currHighfreq,i.second);
        }
        long long op=0;
        while(currHighfreq<n){
            op++;
            if(currHighfreq*2<=n){
                op+=currHighfreq;
                currHighfreq *= 2;
            } else {
                op+=(n-currHighfreq);
                currHighfreq=n;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}