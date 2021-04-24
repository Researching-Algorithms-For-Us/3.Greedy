#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, M, K;
    vector<int> Arr;
    
    cin >> N >> M >> K;
    Arr.resize(N);
    
    for(int i=0; i<N; i++)
    {
        cin >> Arr[i];
    }
    
    std::sort(std::begin(Arr), std::end(Arr), std::greater<int>());
    int MaximumNumber = 0;
    
    int firstMaximunPlus = (int)(M / K) * K;
    int SecondMaximunPlus = M % K;
    MaximumNumber = firstMaximunPlus * Arr[0];
    MaximumNumber += SecondMaximunPlus * Arr[1];
    
    cout << MaximumNumber << endl;

    return 0;
}
