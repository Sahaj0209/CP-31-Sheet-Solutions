#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int g;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i==0) g=abs(v[0]-1);
            g=gcd(g,abs(v[i]-(i+1)));
        }
        cout<<g<<endl;
    }
    return 0;
}