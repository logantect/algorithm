#include<bits/stdc++.h>

using namespace std;

// O(N2) 코드이다.
// (N-1) + (N-2) + ..... + 3 + 2 + 1 = (N²-N)/2 => O(N²)
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int rst = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (i == j) {
                break;
            }

            if (arr[i] + arr[j] == 100) {
                rst = 1;
            }
        }
    }
    cout << rst;
}