#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    int sum = 0;
    int average = 0;
    int deviation[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];  
    }

    for (int i = 0; i < N; i++){
        sum += A[i];
        if (i == N-1){
            average = sum / N;
            break;
        }
    }

    // 平均値との差
    for (int i = 0; i < N; i++){
        deviation[i] = abs(A[i] - average);
        cout << deviation[i] << endl;
    }
}
