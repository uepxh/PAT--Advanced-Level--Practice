//
// Created by riyuu on 2024/4/19.
//
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    int a = 0, b = 0;
    bool flag = false;
    cin >> a >> b;

    string sum;
    if (a + b < 0) {
        sum = to_string(-(a + b));
        flag = true;
    } else {
        sum = to_string(a + b);
    }
    int len = sum.length();
    int count = 0;
    deque<char> ans;
    for (int i = len - 1; i >= 0; i--) {
        count++;
        ans.push_front(sum[i]);
        if (!(count % 3) && i != 0) {
            ans.push_front(',');
        }
    }
    if (flag)
        cout << '-';
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
    return 0;
}