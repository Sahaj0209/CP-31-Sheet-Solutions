#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int minE=INT_MAX;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    minE=min(abs(a[i]),minE);
  }
  cout<<minE<<endl;
  return 0;
}