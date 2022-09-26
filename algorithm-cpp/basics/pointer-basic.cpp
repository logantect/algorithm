#include<bits/stdc++.h>

using namespace std;

int main() {
    string a = "abcda";
    string *b = &a; // 포인터 변수 - 포인터의 주소값을 참조한다.
    cout << b << "\n";
    cout << *b << "\n"; // 포인터 변수의 값을 추출한다.
    return 0;
}