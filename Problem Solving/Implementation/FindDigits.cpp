#include<bits/stdc++.h>
using namespace std;

int main() {
    long int n;
    int t;
    cin >> t;
    while(t--) {
    	cin >> n;
    	int temp=n,count=0;
    	while(temp!=0) {
    		int r = temp%10;
    		if(r!=0 && n%r == 0)
    			count++;
    		temp = temp/10;
    	}
    	cout << count << endl;
    }
    return 0;
}