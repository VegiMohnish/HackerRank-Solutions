#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,n;
    int a;
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> a;
        if(a>=38 && a%5>2) {
            a = a + (5-(a%5));
        }
        cout << a << endl;
    }
    return 0;
}