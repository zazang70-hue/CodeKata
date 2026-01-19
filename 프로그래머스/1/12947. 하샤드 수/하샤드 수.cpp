#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer;
    int sum = 0;
    int v = x;
    
    if(x < 0 && x > 10000)
    {
        return 0;
    }
    
    while( v > 0 )
    {
        sum += v % 10;
        v /= 10;
    }
    
    if(x % sum == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    
    
    return answer;
}