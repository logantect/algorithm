#include<bits/stdc++.h>

using namespace std;

struct Point {
    int y, x;

    Point(int y, int x) : y(y), x(x) {}

    Point() {
        y = -1;
        x = -1;
    }

    bool operator<(const Point &a) const {
        if (x == a.x) {
            return y < a.y;
        }
        return x < a.x;
    }
};

vector<Point> v;
int main() {
    for (int i = 10; i >= 1; i--) {
        Point a = {i, i};
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (auto it : v) {
        cout << it.y << " : " << it.x << '\n';
    }
    return 0;
}