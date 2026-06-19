#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int one=0,two=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1) one++;
            else if(v[i]==2) two++;
        }
        if(two%2) cout<<-1<<endl;
        else {
            int check=0;
            for(int i=0;i<n;i++){
                if(v[i]==2){
                    check++;
                    if(check==two/2){
                        check=i;
                        break;
                    }
                }
            }
            cout<<check+1<<endl;
        }
    }
    return 0;
}