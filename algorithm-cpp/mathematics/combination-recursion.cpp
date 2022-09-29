#include<bits/stdc++.h>

using namespace std;

int n = 5;
int k = 3;
int a[] = {1, 2, 3, 4, 5};

void print(vector<int> b) {
    for(int i : b) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void combination(int start, vector<int> b) {
    if (b.size() == k) {
        print(b);
        return;
    }

    for (int i = start + 1; i < n; i++) {
        b.push_back(i);
        combination(i, b);
        b.pop_back();
    }
    return;
}

int main() {
    vector<int> b;
    combination(-1, b);
    return 0;
}