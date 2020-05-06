#include<bits/stdc++.h>
using namespace std;

int main() {
	int q,x,y,z;
	cin >> q;
	while(q--) {
		cin >> x >> y >> z;
		if(abs(x-z) < abs(y-z))
			cout << "Cat A" << endl;
		else if(abs(x-z) > abs(y-z))
			cout << "Cat B" << endl;
		else if(abs(x-z) == abs(y-z))
			cout << "Mouse C" << endl;
	}
	return 0;
}