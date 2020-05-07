#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,h;
	cin >> t;
	while(t--) {
		cin >> n;
		h=1;
		for(int i=1;i<=n;i++) {
			if(i % 2 != 0)
				h = h*2;
			else 
				h = h+1;
		}
		cout << h << endl;
	}
	return 0;
}