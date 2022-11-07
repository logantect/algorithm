#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }
    cout << sum;
}