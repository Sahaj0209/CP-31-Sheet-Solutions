#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,sum=0;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++){
      cin>>a[i];
      sum+=a[i];
    }
    int eff = sum*(-1);
    cout<<eff<<endl;
  }
  return 0;
}