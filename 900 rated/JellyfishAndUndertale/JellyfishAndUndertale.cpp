#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long sum=b;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=min(v[i],(a-1));
        }
        cout<<sum<<endl;
    }
    return 0;
}