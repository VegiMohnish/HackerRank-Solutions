#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	long int n,m,s;
	cin >> t;
	while(t--) {
		cin >> n >> m >> s;
		if(!((m+s-1)%n))
        cout << n << endl;
        else 
        cout << (m+s-1)%n << endl;
	}
	return 0;
}