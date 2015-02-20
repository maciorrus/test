#include <cstdio>

void test(int x, int min, int max){
	if( min <= max ){
		if( x % min == 0 ) printf("NIE\n");
		else test(x,min+2, max);
	} else printf("TAK\n");
}


void go(){

	int t, i;
	scanf("%d", &t);

	while (t--) {
		scanf("%d", &i);
		if(i<4){
			if (i>1) printf("TAK\n");
			else printf("NIE\n");
		}
		else if	( i % 2 == 0 )
			printf("NIE\n");
		else
			test(i,3,i/2);
	}
}

