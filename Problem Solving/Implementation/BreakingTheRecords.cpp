#include<iostream>
using namespace std;
int main(){

    int n,*a;
    int max,min;
    int h=0,l=0;
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++){

        cin>>a[i];

    }

    max=a[0];
    min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            l++;
        }
        if(a[i]>max){
            max=a[i];
            h++;
        }

    }
    cout<<h<<" "<<l;

    return 0;

}