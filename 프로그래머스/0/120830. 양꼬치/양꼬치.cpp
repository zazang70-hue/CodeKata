#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    
    int f = n/10;
    int d = f * 2000;
    
    int answer = 12000*n + 2000*k - d;
    
    
    return answer;
}