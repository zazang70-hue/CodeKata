#include <algorithm>
#include <cmath>
using namespace std;

int solution(int left, int right)
{
    int answer = 0;

    int n = min(left, right);
    int m = max(left, right);

    for (int i = n; i <= m; ++i)
    {

        int r = (int)sqrt(i);
        if (r * r == i)
        {
            answer -= i;
        }
        else
        {
            answer += i;
        }
    }

    return answer;
}