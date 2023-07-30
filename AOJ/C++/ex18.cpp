#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> game_result(N, vector<char>(N , '-'));

    for (int i = 0; i < M; i++){
        A.at(i)--; B.at(i)--;
        game_result.at(A.at(i)).at(B.at(i)) = 'o';
        game_result.at(B.at(i)).at(A.at(i)) = 'x';
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << game_result.at(i).at(j);
            if (j == N - 1){
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }    
}
