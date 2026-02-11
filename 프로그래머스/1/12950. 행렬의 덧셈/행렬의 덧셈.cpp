#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{

    vector<vector<int>> arr3 = arr1;
    
    for (int i = 0; i < arr3.size(); ++i)
    {
        for (int j = 0; j < arr3[i].size(); ++j)
        {
            arr3[i][j] += arr2[i][j];
        }
    }

    return arr3;
}