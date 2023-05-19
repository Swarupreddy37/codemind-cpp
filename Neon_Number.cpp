#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = n * n, sum = 0;
    while (a > 0) {
        int rem = a % 10;
        sum += rem;
        a /= 10;
    }
    if (sum == n) cout << "Neon Number";
    else cout << "Not Neon Number";
    
    return 0;
}