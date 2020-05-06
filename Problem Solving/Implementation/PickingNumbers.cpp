#include <iostream>
using namespace std;
int main() 
{
    int i, n, k, k1 = 0, max = 0;
    cin >> n;
    int a[100]={0};      
    for(int i = 0;i<n;i++)
    {
        cin>>k;
        
        if(k > k1)
            k1 = k;
        a[k]++;          
    }
    for(i=0;i<k1;i++)
        if(a[i]+a[i+1]> max) 
            max = a[i]+a[i+1];
    
    cout<<max;
    return 0;
}