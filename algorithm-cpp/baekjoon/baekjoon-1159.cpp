#include<bits/stdc++.h>

using namespace std;

int n;
int cnt[26];
vector<string> v;
string str, result;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> str;
        cnt[str[0] - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        if (cnt[i] >= 5) {
            result += (i + 'a');
        }
    }

    if (result.empty()) {
        cout << "PREDAJA" << "\n";
    } else {
        cout << result << "\n";
    }
    return 0;
}