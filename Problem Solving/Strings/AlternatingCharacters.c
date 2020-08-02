#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100000];
        scanf("%s", s);
        char c = "";
        int count = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (c != s[i]) {
                c = s[i];
            }
            else {
                count++;
            }    
        }
        printf("%d\n", count);
    }
    return 0;
}
