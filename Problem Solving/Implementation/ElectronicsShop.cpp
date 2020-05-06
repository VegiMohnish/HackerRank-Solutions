#include <bits/stdc++.h>
using namespace std;

int main() {
    int b,n,m;
    cin >> b >> n >> m;
    int a1[n],a2[m]; 
    int sum=-1;
    for(int i=0;i<n;i++)
    	cin >> a1[i];
    for(int i=0;i<m;i++)
    	cin >> a2[i];
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
        {
        if(a1[i]+a2[j]<=b && a1[i]+a2[j]>sum)
            sum=a1[i]+a2[j];
    }
}
    cout<<sum;
    return 0;
}