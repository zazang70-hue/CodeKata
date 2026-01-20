#include <algorithm>

using namespace std;

long long answer = 0;

long long solution(int a, int b)
{
    long long s = std::min(a, b);
    long long e = std::max(a, b);

    for(long long i = s; i <= e ; ++i)
    {
        answer += i;
    }

    return answer ;
}