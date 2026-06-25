#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long> v(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        vector<long long> prefixSum(n+1,0);
        for(int i=1;i<=n;i++){
            prefixSum[i]=prefixSum[i-1]+v[i-1];
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long add = (r-l+1)*k;
            long long red = prefixSum[r]-prefixSum[l-1];
            long long newSum=sum-red+add;
            if(newSum%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}