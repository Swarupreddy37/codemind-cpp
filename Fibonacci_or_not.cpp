#include<iostream>
using namespace std;
int main() {
    int n, sum, a = 0, b = 1;
    cin >> n;
    for (int i = 0; i < n ; i++) {
        sum = a + b;
        if (a == n) {
            cout << "True";
            return 0;
        }
        else if (a > n) break;
        a = b;
        b = sum;
    }
    cout << "False";
}