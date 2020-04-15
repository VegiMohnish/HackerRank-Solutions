#include<bits/stdc++.h>
using namespace std;

int main() {
	int i,a[3],b[3];
	int a1=0,b1=0;

	for (i=0;i<3;i++) {
		cin >> a[i];

	}

	for(i=0;i<3;i++) {
		cin >> b[i];
	}

	for(i=0;i<3;i++) {
		if(a[i]>b[i]) {
			a1++;
		}
		else  if (a[i]<b[i]) {
			b1++;
		}
		else {

			a1 = a1;
			b1 = b1;
		}
	}

	cout << a1 << " " << b1;

	return 0;


}