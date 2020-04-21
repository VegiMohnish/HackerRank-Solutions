#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,i,k;
	int a[100],b[100];
	cin >> n >> m;
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<m;i++)
		cin >> b[i];
	int count=0;

for(k=a[n-1];k<=b[0];k++) {
	int flag=0;
	for(i=0;i<n;i++) {
		if(k%a[i]!=0) {
			flag=1;
			break;
		}
	}
	if(flag==0) {
		for(i=0;i<m;i++) {
			if(b[i]%k!=0) {
				flag=1;
				break;
			}
		}
	}
	       	if(flag == 0)
            count++;
    }
    cout << count << endl;
    return 0;
}