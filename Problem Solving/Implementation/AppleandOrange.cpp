#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int s,t,a,b,m,n,d;
    int i,j,p,q;
    int c1=0,c2=0;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    for(i=0;i<m;i++) {
        cin >> d;
		if((a+d)>=s && (a+d)<=t)
            c1++;
    }
    for(j=0;j<n;j++) {
        cin >> d;
		if((b+d)>=s && (b+d)<=t)
            c2++;
    }
    cout << c1 << endl << c2;
    return 0;
}