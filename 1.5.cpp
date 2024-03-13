#include <bits/stdc++.h>

using namespace std;

 int max_of_four(int a, int b, int c, int d){
     int u[4];
     u[0] = a, u[1] = b, u[2] = c, u[3] = d;
     sort(u,u+4);
     return u[3];
 }
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << max_of_four(a, b, c, d);
}

