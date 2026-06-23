#include <bits/stdc++.h>
using namespace std;
int dx[4]={-1,1,-1,1},dy[4]={-1,-1,1,1};
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long xK,yK;
        cin>>xK>>yK;
        long long xQ,yQ;
        cin>>xQ>>yQ;
        set<pair<int,int>> kH,qH;
        for(int i=0;i<4;i++){
            kH.insert({xK+dx[i]*a,yK+dy[i]*b});
            qH.insert({xQ+dx[i]*a,yQ+dy[i]*b});
            kH.insert({xK+dx[i]*b,yK+dy[i]*a});
            qH.insert({xQ+dx[i]*b,yQ+dy[i]*a});
        }
        int cnt=0;
        for(auto pos:kH){
            if(qH.find(pos)!=qH.end()) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}