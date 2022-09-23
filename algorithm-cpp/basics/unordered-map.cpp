#include<bits/stdc++.h>

using namespace std;

unordered_map<string, int> umap;

/*
 * 얼핏보면 정렬이 필요로 하지 않은 문제에는 unordered_map을 써야 할 것 같지만
 * 제출해보면 시간초과가 나기도 합니다. 이는 가장 최악의 경우 O(N)이기 때문이죠.
 * 그냥 되도록 map을 쓰는 것을 권장합니다.
 */
int main() {
    umap["bcd"] = 1;
    umap["aaa"] = 1;
    umap["aba"] = 1;
    for(auto it : umap) {
        cout << it.first << " : " << it.second << '\n';
    }
}