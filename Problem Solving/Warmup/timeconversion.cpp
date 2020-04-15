#include<bits/stdc++.h>
using namespace std;

int main() {
    int hour,minute,second;
    char s;
    scanf("%d:%d:%d%c",&hour,&minute,&second,&s);
    if(s == 'P') {
        if(hour != 12)
            hour +=12;
    }
    else if(hour == 12)
        hour = 0;
        printf("%02d:%02d:%02d\n",hour,minute,second);

    return 0;
}