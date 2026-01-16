#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> vec;
    
        while(n>0)
        {
            vec.push_back(n % 10);
            n /= 10;
        }
            
    sort(vec.begin(), vec.end(),greater<long long>());
    

    for(int i = 0; i < vec.size(); ++i)
    {
        answer = answer * 10 + vec[i];
    }
    
    return answer;
}