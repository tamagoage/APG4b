#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;
    int B;
    string op;

    // ここにプログラムを追記
    for (int i = 0; i < N; i++)
    {
        // 演算子と使用する数値を入力
        cin >> op >> B;

        if (op == "+"){
            A += B;
        } else if (op == "-"){
            A -= B;
        } else if (op == "*"){
            A *= B;
        } else if (op == "/"){
            if (B == 0){
                cout << "error" << endl;
                break;
            }
            A /= B;
        }
        
        cout << i+1 << ":" << A << endl;
    }
    
}
