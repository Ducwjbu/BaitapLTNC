#include <bits/stdc++.h>
using namespace std;

int tinh(long long n){
    int cnt = 0;
    long long a = n;
    while(n>0){
        long long v = n%10;
        if(v!=0 && a%v == 0){
            cnt ++;
        }
        n/=10;
    }
    return cnt;
}
int main(){
    int t; cin >> t;
    int a[t];
    for(int i=0;i<t;i++){
        a[i] = 0;
    }
    for(int i = 0;i<t;i++){
        long long k; cin >> k;
        a[i] = tinh(k);
    }
    for(int i =0;i<t;i++){
        cout << a[i] << endl;
    }
}

