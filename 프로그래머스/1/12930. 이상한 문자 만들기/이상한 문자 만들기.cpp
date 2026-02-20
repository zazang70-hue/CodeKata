#include <string>

using namespace std;

string solution(string s)
{
    int in = 0;

    for (int i = 0; i <= s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            in = 0;
        }
        else
        {
            if (in % 2 == 0)
            {
                s[i] = toupper(s[i]);
            }
            else
            {
                s[i] = tolower(s[i]);
            }
            
            in++;
        }
    }

    return s;
}