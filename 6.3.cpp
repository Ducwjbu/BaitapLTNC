#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
    vector<int> scores;
    void input() {
        for(int i = 0; i < 5; i++) {
            int k; cin >> k;
            scores.push_back(k);
        }
    }
    int sum_scores() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }
        return sum;
    }
    
};
int main() {
    
    int q; cin >> q;
    int Kristen_grades = 0;
    int cnt = 0;
    for (int i = 0; i < q; i++) {
        Student s;
        int grades = 0;
        s.input();
        if (i == 0) {
            Kristen_grades = s.sum_scores();
        } else if(s.sum_scores() > Kristen_grades) {
            cnt ++;
        }
    }
    cout << cnt << endl;
    return 0;
}
