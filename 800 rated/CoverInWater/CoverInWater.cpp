#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool consec3 = false;
    int noOfDot = 0;
    for(int i =0;i<n;i++){
      if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
        consec3 = true;
        break;
      }
      if(s[i]=='.'){
        noOfDot++;
      }
    }
    if(consec3) cout<<2<<endl;
    else cout<<noOfDot<<endl;
  }
  return 0;
}