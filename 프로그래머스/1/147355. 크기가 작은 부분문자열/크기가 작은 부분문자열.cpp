#include <string>

using namespace std;

int solution(string t, string p)
{
    int count = 0;
    
    for(int i = 0; i <= t.size() - p.size(); ++i)
    {
        string s = t.substr(i,p.size());
        
        if(s <= p)
        {
            count++;
        }
    }
    
    return count;
}