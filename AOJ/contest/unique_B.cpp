#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    N--; M--;
    
    //N*Mの2次元配列のすべての要素を'.'で初期化
    vector<vector<char>> TaKCode(N, vector<char>(M, '.'));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> TaKCode.at(i).at(j);
        }
    }

    bool is_ok = false;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (TaKCode.at(i).at(j) == '#' && TaKCode.at(i+6).at(j+6) == '#' && TaKCode.at(0).at(j+3) == '.' && TaKCode.at(i+3).at(j) == '.'){
                is_ok = true;
            }
            }
        }

    if (is_ok){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
