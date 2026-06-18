#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long xor_result=0;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            xor_result=xor_result^v[i];
        }
        if(n%2==0 && xor_result==0) cout<<0<<endl;
        else if(n%2==1) cout<<xor_result<<endl;
        else cout<<-1<<endl; 
    }
    return 0;
}