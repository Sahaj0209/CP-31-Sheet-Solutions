#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt=0;
        for(int i=n-1;i>=1;i--){
            while(v[i]<=v[i-1]){
                cnt++;
                v[i-1]=v[i-1]/2;
                if(v[i-1]==0) break;
            }
            if(v[i]==0 && v[i-1]==0) {
                cnt=-1;
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}