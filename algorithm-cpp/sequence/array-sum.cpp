#include<bits/stdc++.h>

using namespace std;

int n, m;
int a, b;

int main() {
    cin >> n >> m;
    int arr[n];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        int sum = 0;
        for (int j = a; j <= b; j++){
            sum += arr[j];
        }
        cout << sum << "\n";
    }
     return 0;
}