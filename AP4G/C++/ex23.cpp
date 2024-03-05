#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> NumArray(N);

    for (int i = 0; i < N; i++)
    {
        cin >> NumArray.at(i);
    }

    int maxNum = *max_element(NumArray.begin(), NumArray.end());
    int minNum = *min_element(NumArray.begin(), NumArray.end());

    // priority_queue<int> NumArrayPQ;
    // for (int i = 0; i < N; i++)
    // {
    //     NumArrayPQ.push(NumArray.at(i));
    // }

    // for (int i = 0; i < minNum; i++) {
    //     if
    // }

    map<int, int> NumMap;
    for (int i = 0; i < N; i++)
    {
        if (NumMap.count(NumArray.at(i)))
        {
            NumMap.at(NumArray.at(i))++;
        }
        else
        {
            NumMap[NumArray.at(i)] = 1;
        }
    }

    // 以降答え参考
    int maxNumCount = 0;
    int ans = 0;

    for (int x : NumArray)
    {
        if (NumMap.at(x) > maxNumCount)
        {
            maxNumCount = NumMap.at(x);
            ans = x;
        }
    }

    cout << ans << " " << maxNumCount << endl;
}
