#include <bits/stdc++.h>
#define ll long long
using namespace std;

int minOps(string n, string posVal) {
    int op = 0;
    int checkIdx = posVal.size() - 1;

    for (int i = n.size() - 1; i >= 0; i--) {
        if (n[i] == posVal[checkIdx]) {
            checkIdx--;
            if (checkIdx < 0)
                break;
        } else {
            op++;
        }
    }

    if (checkIdx >= 0)
        return INT_MAX;

    return op;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        vector<string> posVals = {"00", "25", "50", "75"};

        int ans = INT_MAX;

        for (auto posVal : posVals) {
            ans = min(ans, minOps(n, posVal));
        }

        cout << ans << endl;
    }

    return 0;
}