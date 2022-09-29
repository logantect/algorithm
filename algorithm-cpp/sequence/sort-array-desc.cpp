#include<bits/stdc++.h>

using namespace std;

vector<int> v;
int main() {
    for (int i = 1; i <= 6; i++) {
        v.push_back(i);
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i: v) {
        cout << i << ' ';
    }
}