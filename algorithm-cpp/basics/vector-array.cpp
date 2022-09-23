#include<bits/stdc++.h>

using namespace std;

void f(vector<int> v[10]) {
    v[0][0] = 1000;
}

int main() {
    vector<int> v[10];
    v[0].push_back(100);
    f(v);

    for(int i : v[0]) cout << i << " ";
    return 0;
}