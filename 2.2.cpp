#include <bits/stdc++.h>
using namespace std;

int main(){
    double x, y, z, t;
    cin >> x >> y >> z >> t;
    if(t == y){
        if(x == z) cout << "YES";
        cout << "NO";
        return 0;
    }
    double k = (x-z)/(t-y);
    int u = k;
    double v = k - u; 
    if(k > 0 && v == 0){
        cout << "YES";
    } else cout << "NO";
    return 0;
}

