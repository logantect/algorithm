#include <bits/stdc++.h>

using namespace std;

vector<string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos;

    string token;
    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

vector<string> split_debug(string input, string delimiter) {
    vector<string> ret;
    long long pos;

    string token;
    while ((pos = input.find(delimiter)) != string::npos) {
        cout << "POS: " << pos << "\n";
        if (pos == string::npos)break;
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}

int main() {
    string str = "흐린잉크가 뚜렷한 기억보다 낫다";
    const vector<string> splits = split(str, " ");
    for (string item: splits) {
        cout << item << "\n";
    }
    string str2 = "aaaa bbb ccccc ee ddddddddd!";
    split_debug(str2, " ");
}