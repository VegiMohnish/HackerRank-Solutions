#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,sum=0;
    long long int n,k,b;
    cin >> n >> k;
    long long int a[n];
    for(i=0;i<n;i++) {
        cin >> a[i];
        sum = sum + a[i];
    }
    cin >> b;
    //cout << sum;
    int b_actual=0;
    for(i=0;i<n;i++) {
        b_actual = (sum - a[k])/2;;
    }
    

    if(b == b_actual) {
        cout << "Bon Appetit";
    }

    else  {
        cout << abs(b - b_actual);
    }

    return 0;
}