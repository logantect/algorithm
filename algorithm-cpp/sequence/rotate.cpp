#include<bits/stdc++.h>

using namespace std;

vector<int> v;
int main() {
    for (int i = 1; i < 10; ++i) {
        v.push_back(i);
    }

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "1칸씩 왼쪽 이동(회전) : ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << "\n================================\n";
    std::sort(v.begin(), v.end());
    rotate(v.begin(), v.begin() + 3, v.end());
    cout << "3칸씩 왼쪽 이동(회전) : ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << "\n================================\n";
    std::sort(v.begin(), v.end());
    rotate(v.begin(), v.end() - 3, v.end());
    cout << "3칸씩 오른쪽 이동(회전) : ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << "\n================================\n";
}