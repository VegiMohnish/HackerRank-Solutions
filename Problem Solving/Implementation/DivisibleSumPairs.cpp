#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,i,j;
    cin >> n >> k;
    int a[n];
    for(i=0;i<n;i++)
    	cin >> a[i];
    int count=0;
    for(i=0;i<n;i++) 
        for(j=0;j<i;j++) 
            if( (a[i]+a[j]) % k == 0) 
                count++;
    cout << count;
    return 0;
}