#include <bits/stdc++.h>
using namespace std;
int isSorted(vector<long long> a){
  int n = a.size();
  for(int i = 1; i<n;i++){
    if(a[i]<a[i-1]) return -1;
  }
  return 1;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i = 0;i<n;i++){
      cin>>a[i];
    }
    if(isSorted(a)==1||k>1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}