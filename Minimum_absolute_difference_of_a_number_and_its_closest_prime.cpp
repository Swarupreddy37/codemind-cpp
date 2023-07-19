#include<iostream>
using namespace std;

int isprime (int n) {
    int c = 0;
    for (int i = 1 ; i <= n ; i++) {
        if (n % i == 0) c++;
    }
    if (c == 2) return 1;
    else return 0;
}

int main() {
    int n, a, b;
    cin >> n;
    for (int i = n ; ; i++) {
        if (isprime(i)){ 
            a = i;
            break;
        }
    }
    for (int i = n - 1 ; i > 0 ; i--) {
        if (isprime(i)){ 
            b = i;
            break;
        }
    }
    if ((a - n) < (n - b)) cout << a - n;
    else if ((a - n) > (n - b)) cout << n - b;
    else cout << a - n;
}