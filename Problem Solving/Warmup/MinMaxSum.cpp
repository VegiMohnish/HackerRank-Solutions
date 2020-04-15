#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int a[5],i;
	long long int min=0,max=0;
	
	for(i=0;i<5;i++)
		cin >> a[i];
	sort(a,a+5);
	for(i=0;i<4;i++) {
		min = min + a[i];
	}
	for(i=1;i<5;i++) {
		max = max + a[i];
	}

		cout << min << " " << max;

	return 0;
}