#include<bits/stdc++.h>
using namespace std;

int reverse(int n) {
	int rev=0,rem;
	while(n!=0) {
		rem = n%10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	return rev;
}


int main() {
	long int i,j,k,ir;
	int count=0;
	cin >> i >> j >> k;


	for(int p=i;p<=j;p++) {
			ir = reverse(i);

		if(abs(p-ir)%k == 0)
			count++;
		
	}
	cout << count;
	return 0;
}