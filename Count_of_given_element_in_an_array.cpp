#include<iostream>
using namespace std;
int main() {
    int n, m, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    cin >> m;
    for (int i = 0  ; i < n ; i++) if (a[i] == m) c += 1;
    cout << c;
    
    return 0;
}