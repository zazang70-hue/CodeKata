#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    bool arr[10] = {false};
    
    for(int i = 0; i < numbers.size(); ++i)
    {
        int n = numbers[i];
        arr[n] = true;
    }
    
    for(int d = 0; d <= 9; ++d)
    {
        if(arr[d] == false)
        {
            answer += d;
        }
    }
    
    return answer;
}