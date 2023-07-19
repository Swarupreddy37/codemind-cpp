#include<bits/stdc++.h>
using namespace std;

int isprime(int n) {
    int c = 0;
    for (int i = 1 ; i <= n ; i++) {
        if (n % i == 0) c++;
    }
    if (c == 2) return 1;
    else return 0;
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    int p = n + m;
    for (int i = p + 1 ; ; i++) {
        if (isprime(i)) {
            cout << i - p;
            return 0;
        }
    }
}