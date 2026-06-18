#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(k>x){
            cout<<1<<endl;
            cout<<x<<endl;
        } else {
            int cnt=0;
            int y=x;
            vector<int> v;
            while(true){
                if(y%k==0){
                    y=y-1;
                } else {
                    cnt++;
                    v.push_back(y);
                    x=x-y;
                    y=x;
                }
                if(x==0 || y==0) break;
            }
            cout<<cnt<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}