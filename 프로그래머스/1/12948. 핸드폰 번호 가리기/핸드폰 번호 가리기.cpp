#include <string>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    int length = phone_number.size();
    string tail = phone_number.substr(length - 4, 4);
    string stars(length - 4 , '*');
    
    return answer = stars + tail;
}