#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cntOne=0,cntMinus=0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1) cntOne++;
            else if(v[i]==-1) cntMinus++;
        }
        int ans=0;
        while(cntOne<cntMinus){
            cntOne++;
            cntMinus--;
            ans++;
        }
        if(cntMinus%2) ans++;
        cout<<ans<<endl;
    }
    return 0;
}