#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> DelayTime;
	DelayTime.resize(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> DelayTime[i];
	}

	std::sort(DelayTime.begin(), DelayTime.end());

	vector<int> TotalDelayTime;
	TotalDelayTime.resize(N);
	TotalDelayTime[0] = DelayTime[0];

	for (int i = 1; i < N; ++i)
	{
		TotalDelayTime[i] = DelayTime[i] + TotalDelayTime[i - 1];
	}

	int Result = 0;
	for (int i = 0; i < N; ++i)
	{
		Result += TotalDelayTime[i];
	}

	cout << Result << "\n";
	return 0;

}