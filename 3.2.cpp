#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int u = n;
        while(u-- !=0){
            if(i<u){
                cout << " ";
            } else cout << "#";
        }
        cout << endl;
    }
} 

