#include <bits/stdc++.h>
using namespace std;


/*

    다음 도시로 가는 비용이 남은 가스보다 적고, 현재 도시가 제일 싸지 않다면,
        다음 도시까지 가는 비용만 산다.
    
    현재 있는 도시가 제일 기름이 싸다면
        남은 거리 다 구매
*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int64_t N;
    int64_t Cost = 0;
    cin >> N;

    vector<int> distance;
    vector<int> gascost;
    distance.resize(N - 1);
    gascost.resize(N);

    for (int i = 0; i < N - 1; ++i)
    {
        cin >> distance[i];
    }
    for (int i = 0; i < N; ++i)
    {
        cin >> gascost[i];
    }

    int64_t Min = LONG_MAX;
    for (int i = 0; i < N; ++i)
    {
        if (Min > gascost[i])
        {
            Min = gascost[i];
        }

        Cost += Min * distance[i];
    }


    cout << Cost << "\n";

    return 0;
}
