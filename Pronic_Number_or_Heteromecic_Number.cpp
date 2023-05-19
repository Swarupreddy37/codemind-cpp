#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n == 0){ 
        printf("YES");
        return 0;
    }
    for (int i = 0 ; i < n ; i++) {
        if ((i * (i + 1)) == n) {
            printf("YES");
            return 0;
        }
        else if ((i * (i + 1)) > n) {
            printf("NO");
            return 0;
        }
    }
}