#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,a;
	cin >> t;
	
	while(t--) {
		int count = 0;
		cin >> n >> k;
		for(int i=0;i<n;i++) {
			cin >> a;
			if(a<=0)
				count++;
		}
		if(count >= k)
			cout << "NO" << endl;
		else 
			cout << "YES" << endl;
	}
	return 0;
}