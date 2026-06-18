#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long moves=0;
        if(b>d){
            cout<<-1<<endl;
            continue;
        } else {
            moves=d-b;
            a=a+moves;
            if(a<c){
                cout<<-1<<endl;
                continue;
            }
            moves=moves+(a-c);
        }
        cout<<moves<<endl;
    }
    return 0;
}