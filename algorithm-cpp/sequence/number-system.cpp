#include<bits/stdc++.h>

using namespace std;

vector<int> v;

int main() {
    int n = 100;
    int b = 16;
    while (n > 1) {
        v.push_back(n % b);
        n /= b;
    }

    if (n == 1) {
        v.push_back(n % b);
    }
    reverse(v.begin(), v.end());
    for (int a: v) {
        if (a >= 10) {
            cout << char(a + 55);
        } else {
            cout << a;
        }
    }
    return 0;
}