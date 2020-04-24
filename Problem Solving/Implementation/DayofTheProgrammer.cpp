#include<bits/stdc++.h>
using namespace std;

int main() {
	int y;
	cin >> y;
	if(y<1918) {
		if((y%4)==0) {
			printf("12.09.%d",y);
		}
		else {
			printf("13.09.%d",y);
		}
	}

	else if(y>1918) {
		if( ( y % 400 == 0 ) || ( (y % 4 == 0) && (y % 100 != 0) ) ) {
			printf("12.09.%d",y);
		}
		else {
			printf("13.09.%d",y);
		}
	}

	else if (y==1918) {
		printf("26.09.%d",y);
	}

	return 0;
}