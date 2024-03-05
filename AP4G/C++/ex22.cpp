#include <bits/stdc++.h>
using namespace std;

int main()
{
    // N個のpairが与えられる
    int N;
    cin >> N;
    vector<pair<int, int>> pair_array(N);

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        pair_array[i] = make_pair(b, a);
    }

    sort(pair_array.begin(), pair_array.end());

    for (int i = 0; i < N; i++)
    {
        cout << pair_array.at(i).second << " " << pair_array.at(i).first << endl;
    }
}
