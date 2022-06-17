#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0.0;
    double i = 0.0 ;
    for ( i = 0; i < arr.size(); i++)
    {
        answer += arr[i];
    }
    
    answer /= i;
    cout << answer << endl;
    return answer;
}

int main()
{
    vector <int> a = { 1,2,3,4 };
    solution(a);
    
}

