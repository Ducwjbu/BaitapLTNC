#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if((a[i] + a[j]) % k == 0){
                cnt++;
            }
        }
    }
    cout << cnt;
}

