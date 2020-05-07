#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,a,max=0;
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        cin >> a;
        if(a>max) {
            max = a;
        }
    }
    (k>=max) ? cout << 0 : cout << max-k;
    return 0;
}