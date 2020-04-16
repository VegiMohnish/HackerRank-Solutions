#include<bits/stdc++.h>
using namespace std;

int main() {
    long int x1,x2,v1,v2;
    int i,j;

    cin >> x1 >> v1 >> x2 >> v2;
    if((x2 > x1 && v2 >= v1) || ((x1-x2) % (v2-v1)) != 0)
    cout << "NO";
    else
    cout << "YES";
    return 0;
}