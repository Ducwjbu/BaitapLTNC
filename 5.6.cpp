#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string, int> mp;
	
	int q; cin >> q;
	while(q--){
		int a; cin >> a;
		if(a == 1){
			string s; cin >> s;
			int x; cin >> x;
			mp[s] += x;
		} else if(a == 2){
			string s; cin >> s;
			mp[s] = 0;
		} else if(a == 3){
			string s; cin >> s;
			if(mp.count(s) != 0){
				cout << mp[s] << endl;
			}else cout << "0" << endl;
		}
	}
}
