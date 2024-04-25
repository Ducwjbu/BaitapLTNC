#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int b[n+1];
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        sum1 += a[i];
    }
    for(int i = 0;i<n+1;i++){
        cin >> b[i];
        sum2 += b[i];
    }
    
    cout << sum2 - sum1;
}
