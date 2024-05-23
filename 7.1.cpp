#include <bits/stdc++.h>

using namespace std;

int binary_search(int a[], int n, int x){
	int l = 0, r = n-1;
	int mid = (l+r)/2;
	
	if(mid == x){
		cout << "FOUND";
		return 1;
	} else if(x < mid){
		r = mid - 1;
	} else l = mid + 1;
	
	cout << "NOT FOUND";
	return 0;
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	
	sort(a, a+n);
	int x; cin >> x;
	binary_search(a,n,x);
	
}
