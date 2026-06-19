#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int minEle=INT_MAX;
        int maxEle=INT_MIN;
        int maxEleOccur=-1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>maxEle) {maxEleOccur=i;maxEle=v[i];}
            if(v[i]<minEle) minEle=v[i];
        }
        if(maxEle==minEle) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<maxEle<<" ";
            for(int i=0;i<n;i++){
                if(i==maxEleOccur){
                    continue;
                }
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}