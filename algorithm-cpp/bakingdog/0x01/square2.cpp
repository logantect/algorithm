#include<bits/stdc++.h>

using namespace std;

int solution(int n) {
    int val = 1;
    while (2 * val <= n) {
      val *= 2;
    }
    return val;
}

int main() {
    int n;
    cin >> n;
    cout << solution(n);
}

