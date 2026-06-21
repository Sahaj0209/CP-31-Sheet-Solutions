#include <bits/stdc++.h>
using namespace std;
bool checkRound(long long x){
    int noOfZeroes=0;
    int noOfDigits=0;
    while(x>0){
        int rem = x%10;
        if(rem==0) noOfZeroes++;
        else noOfDigits++;
        if(noOfDigits>1) return false;
        x=x/10;
    }
    return true;
}
int main(){
    vector<long long> roundNumbers;
    for(long long i=1;i<=999999;i++){
        if(checkRound(i)) roundNumbers.push_back(i);
    }
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int cnt=0;
        for(int i=0;i<=roundNumbers.size();i++){
            if(roundNumbers[i]<=n){
                cnt++;
            } else if(roundNumbers[i]>n){
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}