#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    vector<int> a;
    for (int i = 1; i <= 3; i++) {
        a.push_back(i);
    }
    for (int i = 5; i <= 10; i++) {
        a.push_back(i);
    }

    // 4이상인 첫번째 배열의 index 값은 5
    cout << lower_bound(a.begin(), a.end(), 4) - a.begin() << "\n";
    return 0;
}