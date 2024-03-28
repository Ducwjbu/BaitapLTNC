#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	cin.ignore();
	string s; cin >> s;
	int k; cin >> k;
	int len = s.length();
	for(int i =0;i<len;i++){
		if(isalpha(s[i])) {
            if(islower(s[i])) {
                s[i] = char(int((s[i]) + k - 97) % 26 + 97);
            }
            else
                s[i] = char(int((s[i]) + k - 65) % 26 + 65);
        }
	}
	cout << s;
}
