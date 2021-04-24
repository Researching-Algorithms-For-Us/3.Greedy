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
            ProcessCount += N % K;
            N -= ProcessCount;
        } 
            
    }

    std::cout << ProcessCount;
    return 0;
}