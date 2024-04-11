#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int m; cin >> m;
	int a[n];
	int b[m];
	
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	
	for(int i = 0;i<m;i++){
		cin >> b[i];
	}
	
	sort(a, a+n);
	
	int count = 0;
	
	sort(b, b+n+1);
bool flag = true;	
	for(int i = a[n-1]; i<= b[0];i++){
		for(int x : a){
			if(i%x != 0){
				break;
			}
				for(int x : b){
				if(x%i != 0){
					flag = false;
					break;
				}
			if(flag == true){
				count++;
				break;
			}
			}
			flag = true;
		}
	}
	
	cout << count;
}
