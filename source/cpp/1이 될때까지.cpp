#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int ProcessCount = 0;

    while(N != 1)
    {
        if(N % K == 0)
        {
            N /= K;
            ProcessCount++;
        }
        else
        {
            int tmp = (N > K ? N % K : N - 1);
            ProcessCount += tmp;
            N -= tmp;
        } 
 
    }

    std::cout << ProcessCount << "\n";
    return 0;
}