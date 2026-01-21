int solution(int num)
{
    int count = 0;
    long long temp = num;
    
    if(num ==1) return 0;

    while (temp > 1)
    {
        if (temp % 2 == 0)
        {
            temp /= 2;
        }
        else if (temp % 2 != 0)
        {
            temp = (temp * 3) + 1;
        }
        
        count ++;
        
        if (count >= 500)
        {
            count = -1;
            break;
        }
    }

    return count;
}