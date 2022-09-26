#include<bits/stdc++.h>

using namespace std;

// 배열의 이름을 사용시 암묵적으로 첫 번째 원소를 가리키는 포인터로 타입 변환된다.
void go(int a[]) {
    a[2] = 100;
}

int a[3] = {1, 2, 3};

int main() {
    go(a);
    for (int i: a) {
        cout << i << "\n";
    }
}