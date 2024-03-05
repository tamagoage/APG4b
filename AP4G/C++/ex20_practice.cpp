// nまでの総和をもとめる再帰関数
#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    // ベースケース
    if (n == 0) {
        return 0;
    }

    // 再帰ステップ
    int s = sum(n - 1);
    return s + n;
}

int main() {
    cout << sum(3) << endl;  // 3 + 2 + 1 + 0 = 6
    cout << sum(10) << endl;  // 10 + 9 + ... + 1 + 0 = 55
}