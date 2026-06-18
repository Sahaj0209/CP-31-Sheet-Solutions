#include <bits/stdc++.h>
using namespace std;

bool isSorted(long long arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}

long long minDiff(long long arr[], int n){
    long long minD = LLONG_MAX;

    for(int i=1;i<n;i++){
        long long diff = arr[i] - arr[i-1];
        minD = min(minD, diff);
    }

    return minD;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        long long op=INT_MAX;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(i>0){
            if(a[i]<a[i-1]){
              op=0;
            } else {
              long long diff=a[i]-a[i-1];
              long long opReq=(diff/2)+1;
              op=min(op,opReq);
            }
          }
        }
        cout<<op<<endl;
      }
    return 0;
}