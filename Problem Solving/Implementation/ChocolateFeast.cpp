#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> vec;

void chockFunc(int nu, int co, int mn)
{
    int ch_qty;
    int part_res1 = nu / co;
    if(part_res1 >= mn) {
        int part_res2 = part_res1 / mn;
        if(((part_res1 + part_res2) / mn) >= 2) {
            ch_qty = part_res1 + ((part_res1 + -1) / (mn - 1));
        }
        if(((part_res1 + part_res2) / mn) < 2) {
            ch_qty = part_res1 + part_res2;
        }
    }
    if(part_res1 < mn) {
        ch_qty = part_res1;
    }
    vec.push_back(ch_qty);
}

int main()
{
    int t, n, c, m;
    std::cin >> t;
    std::cin.ignore();
    while(t--) {
        std::cin >> n >> c >> m;
        chockFunc(n, c , m);
    }
    for(int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }
    return 0;
}
