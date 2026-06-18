#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    int noOfOdd=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]%2) noOfOdd++;
    }
    if(noOfOdd%2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
  return 0;
}