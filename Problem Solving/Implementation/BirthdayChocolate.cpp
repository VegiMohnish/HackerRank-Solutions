#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
       cin >> a[i];
    }
    int d;
    int m;
    cin >> d >> m;
    int count = 0;
    int sum = 0;
    int j;
    for (int i = 0; i <= n-m; ++i) {
        sum = 0;
        j = i;
        for (int k = 0; k < m; ++k) {
            sum += a[j];
            ++j;
        }
        if (sum == d) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}