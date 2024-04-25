#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int b[n];
    for(int i = 0;i<n;i++){
        cin >> a[i];
        b[i] = 0;
    }
    for(int i =0;i<n;i++){
        if(a[i] != -1){
            b[i]++;
        }
        for(int j = i+1;j<n;j++){
            if(a[i] == a[j] && a[i] != -1){
                b[i]++;
                a[j] = -1;
            }
        }
    }
    int max = b[0];
    for(int i =0;i<n;i++){
        if(b[i] > max){
            max = b[i];
        }
    }
    cout << n - max;
}
