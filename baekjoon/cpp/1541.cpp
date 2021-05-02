#include <bits/stdc++.h>
using namespace std;
/*

30-70-20+40-10+100+30-35 가 있다고 생각해보자. 그럼 최솟값은 어떻게 되어야 할까?

당연히 최솟값을 만들기 위해서는 최대한 '큰 수'를 빼주어야 한다.
즉, 덧셈(+)으로 이루어진 부분을 먼저 계산한 뒤 빼주는 것이다. 이를 적용하여 괄호를 치면 다음과 같을 것이다.

30-70-(20+40)-(10+100+30)-35
그럼 정답은 -275가 될 것이다. 한마디로 포인트는 '덧셈 부분을 먼저 계산 하는 것'이다.

*/
void Tokenize(const std::string& whiteSpace, std::string Input, std::vector<std::string>& tokens)
{
    char* ptr = const_cast<char*>(Input.c_str());
    const char* token;

    while (0 != (token = strtok(ptr, whiteSpace.c_str())))
    {
        tokens.push_back(token);
        ptr = nullptr;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string expression;
    cin >> expression;

    vector<string> substraction;
    int sum = INT_MIN;
    Tokenize("-", expression, substraction);

    for (int i = 0; i < substraction.size(); ++i)
    {
        int temp = 0;
        vector<string> addition;
        Tokenize("+", substraction[i], addition);

        for (int j = 0; j < addition.size(); ++j)
        {
            temp += atoi(addition[j].c_str());
        }

        if (sum == INT_MIN)
        {
            sum = temp;
        }
        else
            sum -= temp;
    }
  

    cout << sum << "\n";

    return 0;
}
