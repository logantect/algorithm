#include<bits/stdc++.h>

using namespace std;

int v[10];

int main() {
    unordered_map<string, int> umap;
    umap.insert({"test1", 1}); // 맵에 데이터 입력 방법1
    umap.emplace("test5", 5); // 맵에 데이터 입력 방법2
    umap["test1"] = 4;// 맵에 데이터 입력 방법3 *권장

    for(auto element : umap) {
        cout << element.first << " :: " << element.second << "\n";
    }

    // find 메서드는 찾지 못하면 end() 이터레이터를 반환한다.
    auto search = umap.find("test4");
    if (search != umap.end()) {
        cout << "found: " << search->first << " " << (*search).second << "\n";
    } else {
        cout << "not found.." << "\n";
    }

    // 바로 int형을 증가시킬 수 있다.
    umap["test1"]++;
    cout << umap["test1"] << "\n";

    cout << umap.size() << "\n";
    umap.erase("test1");
    cout << umap.size() << "\n";

    return 0;
}