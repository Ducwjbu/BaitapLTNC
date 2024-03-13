#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i =0 ;i<n;i++){
        cin >> a[i];
    }
    double cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i=0;i<n;i++){
        if(a[i] > 0){
            cnt1++;
        } else if(a[i] < 0){
            cnt2++;
        } else cnt3++;
    }
    cout << setprecision(6) << fixed << (double)cnt1/n << endl << (double)cnt2/n << endl << (double)cnt3/n;
}

