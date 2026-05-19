#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long>pointsArr;
        pointsArr.push_back(0);
        for(int i =0;i<n;i++){
            long long point;
            cin>>point;
            pointsArr.push_back(point);
        }
        pointsArr.push_back(x);
        n = pointsArr.size();
        long long maxDist = INT_MIN;
        for(int i =1;i<n;i++){
            if(i==n-1) maxDist=max(maxDist,2*(pointsArr[i]-pointsArr[i-1]));
            else maxDist = max(maxDist,pointsArr[i]-pointsArr[i-1]);
        }
        cout<<maxDist<<endl;
    }
    return 0;
}