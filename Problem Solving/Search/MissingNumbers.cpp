#include<bits/stdc++.h>
using namespace std;

int main() {
	long int n,m;
	long int a,b;
	int f[100001];
	for(int i=0;i<10000;i++) {
		f[i]=0;
	}
		cin >> n;
		for(int i=0;i<n;i++) {
			cin >> a;
			f[a]++;
		}
		cin >> m;
		for(int i=0;i<m;i++) {
			cin >> b;
			f[b]--;
		}

		for(int i=1;i<=10000;i++) {
			if(f[i]!=0) {
				cout << i << " ";
			}
		}
		return 0;
}
