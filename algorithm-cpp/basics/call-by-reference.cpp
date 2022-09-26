#include<bits/stdc++.h>

using namespace std;

void callByReference(int n) {
    n = 100;
}

void callByValue(int n) {
    n = 200;
    cout << n << "\n";  // 지역변수 n이 200으로 변경 됨.
}

int main() {
    int n = 1;
    callByReference(n); // 100으로 변경 됨.
    cout << n << "\n";
    callByValue(n); // 그대로 100 변경되지 않음.
    cout << n << "\n";
}