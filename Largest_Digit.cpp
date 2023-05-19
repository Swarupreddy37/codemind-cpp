#include<iostream>
using namespace std;
int main() {
    int n, max = 0;
    scanf("%d",&n);
    while(n > 0) {
        int rem = n % 10;
        if (rem > max) max = rem;
        n /= 10;
    }
    printf("%d",max);
}