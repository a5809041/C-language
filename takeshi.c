#include <stdio.h>

int main(){
	int a1,a2,b1,b2,bsum=0;
	
	for(a1=1;a1<101;a1++){
		for(a2=1;a2<101;a2++){
			for(b1=1;b1<101;b1++){
				for(b2=1;b2<101;b2++){
					if(a1*a2 == 2*(b1+b2)&& b1*b2 == 2*(a1+a2)&&a1+a2 >= b1+b2){
						printf("a1:%d,a2:%d,b1:%d,b2:%d\n",a1,a2,b1,b2);
						if(b1+b2>bsum){
							bsum=b1+b2;
						}
					}
				}
			}
		}
	}
	printf("max b sum is %d\n",bsum);
}



/*
#define MAX_ROOP 100

for(a1=2; a1<=MAX_ROOP; a1+=2){
	for(a2=1; a2<=MAX_ROOP; a2++){
		for(b1=2, b2=(a1*a2-2*b1)/2; 2*b1<a1*a2 && b1<=MAX_ROOP && b1*b2<=2*2*MAX_ROOP; b1+=2, b2-=2){
			count++;
			if(b1*b2 == 2*(a1+a2) && a1+a2 >= b1+b2){
				printf("a1:%d, a2:%d, b1:%d, b2:%d\n",a1,a2,b1,b2);
				if(b1+b2>bsum)
					bsum=b1+b2;
			}
		}
	}
}
printf("max b sum is %d\n",bsum);
printf("%d\n",count);
//count = 2908
}
*/