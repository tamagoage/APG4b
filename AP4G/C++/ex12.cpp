#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    
    // ここにプログラムを追記
    int StringLength = S.length();
    // はじめの1
    int total_one = 1;
    for (int i = 0; i < StringLength; i++){
        // 演算子を取得
        if (i%2 == 1){
            if (S.at(i) == '+'){
                total_one += 1;
            } else if (S.at(i) == '-'){
                total_one -= 1;
            }
        }
    }
    cout << total_one << endl;
}