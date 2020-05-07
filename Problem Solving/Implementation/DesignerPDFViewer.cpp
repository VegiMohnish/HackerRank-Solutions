#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[26];
    string s;

    for(int i=0;i<26;i++) {
        cin >> a[i];
    }
    cin >> s;
    int h=0;
    int temp,l;
    for(int i=0;i<s.length();i++) {
        char c = s[i];
        temp = int (c);
        temp = temp-97;
        l = a[temp];

        if(l>=h)
            h=l;
        
    }
    cout << s.length()*h;
    return 0;
}