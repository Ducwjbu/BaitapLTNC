#include <bits/stdc++.h>

using namespace std; 

 bool isPalindrome(string s){
    int len = s.length();
    for(int i =0;i<len/2;i++){
        if(s[i] != s[len - 1 - i]){
            return false;
        }
    }
    return true;
}

int palindromeIndex(string s) {
    if(isPalindrome(s)){
        return -1;
    }
    
    string kq = "";
    int len = s.length();
    int i = 0;
    int j = len-1;
    while(i<=j){
        if(s[i] != s[j]){
            for(int k = i + 1; k<=j;k++){
                kq += s[k];
            }
            if(isPalindrome(kq)){
                return i;
            }
            return j;
        }
        i++;
        j--;
    }
    return -1;

}

