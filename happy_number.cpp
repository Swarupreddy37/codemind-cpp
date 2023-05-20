#include<iostream>
using namespace std;
int main() {
    int n, s = 0;
    cin >> n;
    do {
        s = 0;
        while (n != 0) {
            int rem = n % 10;
            int sqr = rem * rem;
            s += sqr;
            n /= 10;
        }
        n = s;
    }while (s > 9);
    if (s == 1 || s == 7) printf("True");
    else printf("False");
}