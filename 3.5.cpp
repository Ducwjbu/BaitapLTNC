#include <bits/stdc++.h>

using namespace std;

string hk(string s){
	string u = "hackerrank";
	int j = 0;
	int len = s.length();
	for(int i = 0;i<len;i++){
		if(s[i] == u[j]){
			j++;
			if(j == 10) return "YES";
		}	
	}
	return "NO";
}
int main(){
	int n; cin >> n;
	cin.ignore();
	for(int i = 0;i<n;i++){
		string s; cin >> s;
		cout << hk(s) << endl;
	}
}
