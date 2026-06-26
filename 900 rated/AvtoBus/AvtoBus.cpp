#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long max,min;
        if(n%2==0 && n>=4){
            max = (n/4);
            min = (n+5)/6;
            cout<<min<<" "<<max<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    return 0;
}