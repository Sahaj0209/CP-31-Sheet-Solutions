#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int cnt=0,maxLen=0;
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                cnt++;
                maxLen=max(maxLen,cnt);
            } else{
                cnt=0;
            }
        }
        cout<<maxLen<<endl;
    }
    return 0;
}