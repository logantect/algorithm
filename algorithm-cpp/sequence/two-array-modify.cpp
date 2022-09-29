#include<bits/stdc++.h>

using namespace std;

void b(int a[][5]) {
    a[0][4] = 44;
}

int main() {
    int a[3][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15},
    };
    b(a);
    cout << a[0][4] << "\n";
    return 0;
}
