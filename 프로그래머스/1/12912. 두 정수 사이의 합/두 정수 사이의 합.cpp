#include <algorithm>

using namespace std;


long long solution(int a, int b)
{
    long long answer = 0;
    long long s = min(a, b);
    long long e = max(a, b);

    for(long long i = s; i <= e ; ++i)
    {
        answer += i;
    }

    return answer ;
}