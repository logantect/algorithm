#include<bits/stdc++.h>

using namespace std;

int n, m;
int a, b;
int arr[100004], psum[100004];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        psum[i] = psum[i - 1] + arr[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        cout << psum[a] - psum[a - 1] << "\n";
    }

    return 0;
}