#include <string>
#include <vector>
using namespace std;

void hanoi(int n, int from, int to, int tmp, vector<vector<int>> &answer){
    if(n == 1) {
        answer.push_back({from, to});
        return;
    }
    
    hanoi(n-1, from, tmp, to, answer);
    answer.push_back({from, to});
    hanoi(n-1, tmp, to, from, answer);
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(n, 1, 3, 2, answer);
    return answer;
}