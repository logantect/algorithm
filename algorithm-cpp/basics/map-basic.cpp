#include<bits/stdc++.h>

using namespace std;

map<string, int> mp;

int main() {
    // 이렇게 넣기도 가능하고
    mp.insert({"test1", 1});
    // 이렇게 넣을 수도 있다.
    mp.emplace("test5", 5);
    // 또한 이렇게 변경도 가능, 추가할 수도 있다. 아래를 권장.
    mp["test1"] = 4;

    for (auto element: mp) {
        cout << element.first << " :: " << element.second << '\n';
    }

    // map의 find메서드는 찾지 못하면 end() 이터레이터를 반환합니다.
    auto search = mp.find("test4");
    if (search != mp.end()) {
        cout << "found :" << search->first << " " << (*search).second << '\n';
    } else {
        cout << "not found.." << '\n';
    }

    // 이런식으로 바로 int형을 증가시킬 수 있습니다.
    mp["test1"]++;
    cout << mp["test1"] << "\n";

    cout << mp.size() << "\n";
    mp.erase("test1");
    cout << mp.size() << "\n";

    // map을 순회할 때는 key값을 first, value값은 second로 탐색이 가능
    map<string, int> _map;
    _map["큰돌"]++;
    _map["큰돌"]++;
    for (auto c: _map) {
        cout << c.first << " : " << c.second << "\n";
    }
    return 0;
}