#include<bits/stdc++.h>
using namespace std;

int main() {
    int p,d,m,s;
    int count=0;
    cin >> p >> d >> m >> s;
    
    while(s>=p) {
        count++;
        s = s-p;
        p = max(p-d,m);
    }
    cout << count;

    return 0;

}
