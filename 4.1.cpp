#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int m; cin >> m;
	int u = m/2;
	int v;
	if(m%2 != 0){
		v = (n-m+1)/2;
	} else v = (n-m)/2;
	cout << min(u,v);
}
