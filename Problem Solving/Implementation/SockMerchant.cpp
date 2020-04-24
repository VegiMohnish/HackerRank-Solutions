#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,i;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++) {
		cin >> a[i];
	}

	sort(a,a+n);
	int count=0;
	for(i=0;i<n-1;i++) {
		if(a[i]==a[i+1]) {
			count++;
			i++;
		}
	}
	cout << count;
	return 0;
}