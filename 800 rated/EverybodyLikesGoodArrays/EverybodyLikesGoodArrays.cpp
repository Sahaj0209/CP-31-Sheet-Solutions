#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i>0){
                if((v[i-1]%2==1 && v[i]%2==1)||(v[i-1]%2==0 && v[i]%2==0)){
                    ans++;
                }
            }
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }        
        cout<<ans<<endl;
    }
    return 0;
}