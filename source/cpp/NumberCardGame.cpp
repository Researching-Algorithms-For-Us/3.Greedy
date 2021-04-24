#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    std::vector<std::vector<int>> Cards;

    Cards.resize(N);
    for(int i=0; i<N; i++)
    {
        Cards[i].resize(M);
    }

    for(int i=0; i<N; ++i)
    {
        for(int j=0; j<M; ++j)
        {
            cin >> Cards[i][j];
        }
    }

    vector<int> ResultVector;
    ResultVector.resize(N);
    for(int i=0; i<N; ++i)
    {
        std::sort(Cards[i].begin(), Cards[i].end());
        ResultVector[i] = Cards[i][0];
    }

    std::sort(ResultVector.begin(), ResultVector.end(), std::greater<int>());
    std::cout << ResultVector[0] << std::endl;

}