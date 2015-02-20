#include <cstdio>

void go(){

	int t, x, y;
	scanf("%d", &t);

	while (t--) {
		scanf("%d %d", &x, &y);
		int z = x % 10;
		switch(z){
			case 2:
				for(int i = 0; i < (y-1)%4; i++){
					z = (z*x)%10;
				}
				break;
			case 3:
				for(int i = 0; i < (y-1)%4; i++){
					z = (z*x)%10;
				}
				break;
			case 4:
				if((y-1)%2==1) z = 6;
				break;
			case 7:
				for(int i = 0; i < (y-1)%4; i++){
					z = (z*x)%10;
				}
				break;
			case 8:
				for(int i = 0; i < (y-1)%4; i++){
					z = (z*x)%10;
				}
				break;
			case 9:
				if((y-1)%2==1) z = 1;
				break;
			default:
				break;
		}
		
		printf("%d\n", z);
	}
}

