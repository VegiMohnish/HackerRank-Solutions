#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,c1=0,c2=0;
	char c;
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> c;
		if(c == 'U')
			c1++;
		else
			c1--;
		if(c1 == 0 && c == 'U')
			c2++;
	}
	cout << c2;
	return 0;
}