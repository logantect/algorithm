#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int a[3] = {1, 2, 3};
vector<int> vt;

void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void makePermutation(int n, int r, int depth) {
    cout << "f(" << n << ", " << r << ", " << depth << ")" << '\n';
    if (r == depth) {
        printV(vt);
        return;
    }
    for (int i = depth; i < n; i++) {
        cout << "s(" << i << ", " << depth << ")" << '\n';
        swap(vt[i], vt[depth]);
        makePermutation(n, r, depth + 1);
        swap(vt[i], vt[depth]);
    }
    return;
}

int main() {
    for (int i = 0; i < 3; i++) {
        vt.push_back(a[i]);
    }
    makePermutation(3, 3, 0);
    return 0;
}

