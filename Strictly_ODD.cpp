#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    int c = 1;
    for (int i = 1 ; i < n ; i += 2) {
        if (a[i] % 2 == 0) {
            c = 0;
            break;
        }
    }
    if (c) cout << "True";
    else cout << "False";
}