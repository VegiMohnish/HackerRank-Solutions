#include<bits/stdc++.h>
using namespace std;

int main() {

int n=0,p=0,min;
cin >> n >> p;
min=(n/2)-(p/2);
if(min>p/2)
min=p/2;
cout << min;
return 0;
}