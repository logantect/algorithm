#include <iostream>

using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void permutation(char data[], int depth, int n, int r) {
    if (depth == r) {
        for (int i = 0; i < r; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = depth; i < n; i++) {
        swap(data[depth], data[i]); // 스왑
        permutation(data, depth + 1, n, r); // 재귀
        swap(data[depth], data[i]); // 다시 원래 위치로 되돌리기
    }
}

int main(){
    char arr[] = {'a', 'b', 'c', 'd'};
    permutation(arr, 0, 4, 3); // 4P3
    return 0;
}