#include<bits/stdc++.h>

using namespace std;

map<int, int> mp;
map<string, string> mp2;
map<int, int> mp3;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //  map의 경우 해당 인덱스에 참조만 해도 맵에 값이 생기며맵의 요소가 생기게 됩니다.
    //  int형 같은 경우 0으로. string 같은 경우 빈문자열로 들어가게 됩니다.
    cout << mp[1] << '\n';
    cout << mp2["aaa"] << '\n';
    for (auto i: mp) {
        cout << i.first << " " << i.second;
    }
    cout << '\n';
    for (auto i: mp2) {
        cout << i.first << " " << i.second;
    }


    if (mp[1] == 0) {
        mp[1] = 2;
    }
    for (auto i: mp) cout << i.first << " " << i.second;

    return 0;
}