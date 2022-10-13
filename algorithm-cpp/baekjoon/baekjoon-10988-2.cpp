#include<bits/stdc++.h>

using namespace std;

string str, temp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;
    temp = str;
    reverse(temp.begin(), temp.end());
    if (temp == str) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
    return 0;
}