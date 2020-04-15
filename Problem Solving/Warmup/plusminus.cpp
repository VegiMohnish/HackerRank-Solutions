#include<bits/stdc++.h>
using namespace std;

int main() {
    int l=0,m=0,o=0;
        int n,a;
        float p,q,r;

    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a;

        if(a>0) 
            l++;
        
        else if (a<0) 
            m++;
        
        else if (a==0) 
            o++;
}

    p = float(l)/float(n);
    q = float(m)/float(n);
    r = float(o)/float(n);
    printf("%.6f\n",p);
    printf("%.6f\n",q);
    printf("%.6f\n",r);

    return 0;
}