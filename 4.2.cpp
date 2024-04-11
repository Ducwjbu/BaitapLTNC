#include <bits/stdc++.h>

using namespace std;

bool kt(string s, int len){
	for(int i = 0;i<=len/2;i++){
		if(s[i] != s[len - i-1]){
			return false;
		}
	}
}

int vt(string s){
	string u = s;
	int len = s.length();
	for(int i = 0;i<len ;i++){
		for(int j = i;j<len-1;j++){
			s[j] = s[j+1];
		}
		if(kt(s, len-1) == true){
			return i;
		}
	}
	return 0;
}
int main(){
	int n; cin >> n;
	for(int i = 0;i<n;i++){
		string s; cin >> s;
		cout << vt(s);
	}
}
