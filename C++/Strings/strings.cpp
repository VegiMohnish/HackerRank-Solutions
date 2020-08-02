#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin >> a;
    cin >> b;
    int l1 = a.size();
    int l2 = b.size();
    cout << l1 << " " << l2 << endl;
    string c = a + b;
    cout << c << endl;
    char a0 = a[0];
    char b0 = b[0];
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b;


    
  
    return 0;
}
