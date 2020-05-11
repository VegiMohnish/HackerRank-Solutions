#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int c[n];
    for(int i=0;i<n;i++)
    cin >> c[i];
    int e=100,i;
    i=k%n;
    e -= c[i]*2+1;
    while (i!=0) {
        i = (i+k)%n;
        e-=c[i]*2+1;
    }
    cout << e;
    return 0;
}