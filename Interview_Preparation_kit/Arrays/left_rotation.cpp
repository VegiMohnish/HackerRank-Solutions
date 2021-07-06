#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    cin >> n >> d;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    vector<int> v;
    for(int i=d;i<n;i++)
        v.push_back(arr[i]);
        
    for(int i=0;i<d;i++)
        v.push_back(arr[i]);
        
    for(int i=0;i<n;i++) {
        cout << v[i] << " ";
    }
    return 0;
}
