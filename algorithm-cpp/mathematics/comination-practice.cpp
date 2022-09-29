#include<bits/stdc++.h>

using namespace std;

int n = 5;
int k = 3;

void printV(vector<int> v) {
    for(int i : v) {
        cout << i << " ";
    }
    cout << "\n";
}

void combination(int start, vector<int> v) {
    if (v.size() == k) {
        printV(v);
        return;
    }

    for (int i = start + 1; i < n; i++) {
        v.push_back(i);
        combination(i, v);
        v.pop_back();
    }
    return;
}

int main() {
    vector<int> v;
    combination(-1, v);
    return 0;
}