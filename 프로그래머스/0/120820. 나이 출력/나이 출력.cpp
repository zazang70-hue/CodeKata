#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = 0;
    int year = 2022;
    if (0 < age <= 120)
    {
    answer = year - (age - 1);
    }
    
    
    return answer;
}