#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
        if(n > 10000000000)
        {
            return answer;
        }
    
        while(n > 0)
        {
            answer.push_back(n % 10);
            n /= 10;
        }
    
    

    
    return answer;
}