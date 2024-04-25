#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	
	vector<int> v; 
	for(int i = 0;i<n;i++){
		int x; cin >> x;
		v.push_back(x);
	}
	
	int q; cin >> q;
	while(q--){
		int y; cin >> y;
		auto vt = find(v.begin(), v.end(), y);
		if(vt != v.end()){
			cout << "YES" << ' ' << *vt;
		}else{
			auto p1 = lower_bound(v.begin(), v.end(), y);
			cout << "NO" << ' ' << *p1; 
		}
	}
}
