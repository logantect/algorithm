#include<bits/stdc++.h>

using namespace std;

string dopa = "life is limited";

int main() {
    cout << dopa << "\n";
    cout << dopa.substr(0, 3) << "\n";

    reverse(dopa.begin(), dopa.end());
    cout << dopa << "\n";

    dopa += "dopa!!";
    cout << dopa << "\n";
    return 0;
}