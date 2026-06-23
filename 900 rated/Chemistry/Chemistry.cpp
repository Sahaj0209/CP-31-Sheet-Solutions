#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int arr[26]={0};
        int cnt=0;
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]%2) cnt++;
        }
        if(cnt>(k+1)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}