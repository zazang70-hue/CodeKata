int solution(int n)
{
    int val = 0;

    while (n > 0)
    {
        val = val *3 + (n % 3);
        n /= 3;
    }

    return val;
}