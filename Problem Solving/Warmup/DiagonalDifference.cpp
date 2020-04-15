#include<bits/stdc++.h>

using namespace std;

int main() 
{ 
 
  int n;
  int l=0,r=0,sum=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++) {
    	for(int j=0;j<n;j++) {
    		            cin>>a[i][j];

    		        }
    		}
    for(int i=0;i<n;i++) {
    	l = l + a[i][i];
    	r = r + a[i][n-i-1];
    	
    }
    	sum = abs(l-r);
    	cout << sum;
return 0;
        }

