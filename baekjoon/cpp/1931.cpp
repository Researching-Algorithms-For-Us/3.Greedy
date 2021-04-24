#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Meet
{
    int32_t StartTime;
    int32_t EndTime;
};

int main()
{
    int N;
    vector<Meet> Meets;

    cin >> N;
    Meets.resize(N);

    for (int i = 0; i < N; ++i)
    {
        int Start;
        int End;
        cin >> Start >> End;

        Meets[i].StartTime = Start;
        Meets[i].EndTime = End;
    }

    std::sort(Meets.begin(), Meets.end(), [](const Meet left, const Meet right)  // 회의 최대 학보를 위해 끝나는 시간 오름차순 정렬.
        {
            if(left.EndTime == right.EndTime) // 끝나는 시간은 같은데 시작 시간이 다른 경우
                return left.StartTime < right.StartTime;
            else 
                return left.EndTime < right.EndTime;
        });

    
    int Count = 1;
    int Begin = Meets[0].StartTime;
    int End = Meets[0].EndTime;

    for (int i = 1; i < Meets.size(); ++i)
    {
        if(End <= Meets[i].StartTime)  // 한 회의가 끝나는 것과 동시에 다음 회의가 시작될수 있다.
        {
            Begin = Meets[i].StartTime;
            End = Meets[i].EndTime;
            Count++;
        }
    }

    cout << Count << "\n";

    return 0;
}