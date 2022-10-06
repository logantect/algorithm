#include<bits/stdc++.h>

using namespace std;

int a, b, c;
int arrival, leave;
int cnt[104];
int sum;

int main() {
    cin >> a >> b >> c;

    for (int i = 0; i < 3; ++i) {
        cin >> arrival >> leave;
        for (int j = arrival; j < leave; ++j) {
            cnt[j]++;
        }
    }

    for (int i = 0; i < 104; ++i) {
        if (cnt[i] == 1) {
            sum += a;
        } else if (cnt[i] == 2) {
            sum += b * 2;
        } else if (cnt[i] == 3) {
            sum += c * 3;
        }
    }

    cout << sum;
    return 0;
}