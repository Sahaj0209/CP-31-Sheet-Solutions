#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(v[i],v[j])<=2){
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}