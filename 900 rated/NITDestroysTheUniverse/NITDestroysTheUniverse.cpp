#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        int zeroCnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0) zeroCnt++;
        }
        int l=0,r=n-1;
        while(v[l]==0) l++;
        while(v[r]==0) r--;
        bool flag=false;
        for(int i=l;i<=r;i++){
            if(v[i]==0) flag=true;
        }
        if(n==zeroCnt) cout<<0<<endl;
        else if(flag) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}