#include<bits/stdc++.h>

using namespace std;

vector<int> v;
bool cmp(int a, int b) {
    return a > b;
}

int main() {
    for (int i = 1; i <= 6; i++) {
        v.push_back(i);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i: v) {
        cout << i << ' ';
    }
}