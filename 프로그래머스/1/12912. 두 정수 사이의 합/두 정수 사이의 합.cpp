#include <algorithm>

using namespace std;

long long solution(int a, int b)
{
    long long s = std::min(a, b);
    long long e = std::max(a, b);

    long long n = e - s + 1;

    return ( s + e ) * n / 2 ;
}