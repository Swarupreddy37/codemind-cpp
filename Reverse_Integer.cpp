#include<iostream>
using namespace std;
int main() {
    int n, rev = 0;
    scanf("%d",&n);
    int temp = n;
    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (temp < 0) printf("%d",rev);
    else printf("%d",rev);
}