#include<bits/stdc++.h>

using namespace std;

string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    int n = str.length();
    char char_array[n + 1];

    strcpy(char_array, str.c_str());
    string str2;
    for (int i = n - 1; i >= 0; --i) {
        str2 += char_array[i];
    }

    if (str == str2) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}