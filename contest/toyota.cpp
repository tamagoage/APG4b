#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    // ABCのカウント
    int A = 0;
    int B = 0;
    int C = 0;
    int string_count = 0;

    cin >> N;
    string S;
    cin >> S;

    // ここにプログラムを追記
    for (int i = 0; i < S.size(); i++)
    {
        if (S.at(i) == 'A' && A == 0){
            A++;
            string_count = i+1;
        } else if (S.at(i) == 'B' && B == 0){
            B++;
            string_count = i+1;
        } else if (S.at(i) == 'C' && C == 0){
            C++;
            string_count = i+1;
        } else if (A == 1 && B == 1 && C == 1){
            cout << string_count << endl;
            break;
        }
            
    }
    
}