#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int32_t> CoinTypes;
    int UseCoinCount = 0;
    int N, K;
    
    cin >> N >> K;
    CoinTypes.resize(N);

    for(int i=0; i<N; ++i)
    {
        int CoinType;
        cin >> CoinTypes[i];
    }

    for(auto iter = CoinTypes.rbegin(); iter!= CoinTypes.rend(); ++iter)
    {
        const auto CoinType = *iter;

        if(CoinType <= K)
        {
            UseCoinCount += K / CoinType;
            K -= K / CoinType * CoinType;
        }
    }

    cout << UseCoinCount << "\n";

    return 0;
}