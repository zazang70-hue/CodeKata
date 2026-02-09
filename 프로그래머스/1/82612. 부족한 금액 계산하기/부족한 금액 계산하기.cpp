using namespace std;

long long solution(int price, int money, int count)
{
    long long Total = 0;

    for (int i = 1; i <= count; ++i)
    {
        Total += 1ll * i * price;
    }

    
    long long v = Total - money;

    return (v > 0) ? v : 0;
}