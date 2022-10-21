#include<bits/stdc++.h>

using namespace std;

int n, m;

// 맵 하나로 처리하려면 값으로 키를 찾아야하는데
// 값으로 키를 찾게되면 O(n)시간이 걸리기 때문에 시간초과가 된다.
// 그래서 맵 자료구조 두 개를 이용한다.
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    map<string, int> namePokeMons;
    map<int, string> indexPokeMons;
    for (int i = 1; i <= n; ++i) {
        string input;
        cin >> input;
        namePokeMons[input] = i;
        indexPokeMons[i] = input;
    }

    for (int i = 0; i < m; ++i) {
        string problem;
        cin >> problem;
        if (atoi(problem.c_str()) == 0) {
            cout << namePokeMons[problem] << "\n";
        } else {
            cout << indexPokeMons[atoi(problem.c_str())] << "\n";
        }
    }
}

