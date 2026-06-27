#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
        long long pos = n%4;
        if(pos==0) pos = 0;
        else if(pos==1) pos = -n;
        else if(pos==2) pos=1;
        else pos=n+1;
        if(x%2==0){
            pos=x+pos;
        } else {
            pos=x-pos;
        }
        cout<<pos<<endl;
    }
    return 0;
}