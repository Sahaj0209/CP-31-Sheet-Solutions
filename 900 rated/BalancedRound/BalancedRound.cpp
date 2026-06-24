#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<int> v(n);
        long long cnt=1,maxCnt=1;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++){
                if(v[i]-v[i-1]<=k){
                    cnt++;
                    maxCnt=max(maxCnt,cnt);
                } else{
                    cnt=1;
                }
        }        
        cout<<n-maxCnt<<endl;
    }
    return 0;
}