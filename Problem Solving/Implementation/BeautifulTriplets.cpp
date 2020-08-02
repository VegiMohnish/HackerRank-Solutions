#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
bool h[21001];

int main() {
  int n, d;
  cin >> n >> d;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    v.push_back(num);
    h[num] = true;
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (h[v[i] + d] && h[v[i] + d + d]) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
