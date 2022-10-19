#include<bits/stdc++.h>

using namespace std;

int n;
string pattern;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> pattern;

    int found = pattern.find('*');
    string prefix = pattern.substr(0, found);
    string suffix = pattern.substr(found + 1);

    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;

        if (prefix.size() + suffix.size() > str.size()) {
            cout << "NE" << "\n";
        } else {
            string first = str.substr(0, prefix.size());
            string last = str.substr(str.size() - suffix.size());

            if (prefix == first && suffix == last) {
                cout << "DA" << "\n";
            } else {
                cout << "NE" << "\n";
            }
        }
    }
    return 0;
}