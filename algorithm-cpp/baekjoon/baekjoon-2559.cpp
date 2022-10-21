#include<bits/stdc++.h>

using namespace std;

int n, k, temp;
int psum[100000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> sum;
        psum[i] = psum[i - 1] + sum;
    }

    int result = -10000000;
    for (int i = k; i <= n; i++) {
        result = max(result, psum[i] - psum[i - k]);
    }

    cout << result << "\n";
    return 0;
}