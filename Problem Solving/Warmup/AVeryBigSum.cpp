#include <iostream>
using namespace std;

int main() {

   int n;
   long long sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        long long int a[n];
        cin >> a[i];
        sum+=a[i];
    }
    cout << sum << endl;
    return 0;
}